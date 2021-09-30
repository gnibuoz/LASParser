#pragma once

#include<windows.h>

#include "QtCore/QFile"
#include "QtCore/QDataStream"

#include "LASHeader.h"

#include <vector>

//点的数据格式
//1.0版本点的数据格式，共计两种 0，1
//1.1版本点的数据格式，共计两种 0，1
//1.2版本点的数据格式，共计四种 0，1，2，3
//1.3版本点的数据格式，共计六种 0，1，2，3，4，5
//1.4版本点的数据格式，共计十一种 0-10

enum class LASVersion : uchar {
	Version_1_0 = 0,
	Version_1_1,
	Version_1_2,
	Version_1_3,
	Version_1_4,
};

enum class LASPointDataFormat : uchar {
	PointDataRecordFormat0,
	PointDataRecordFormat1,
	PointDataRecordFormat2,
	PointDataRecordFormat3,
	PointDataRecordFormat4,
	PointDataRecordFormat5,
	PointDataRecordFormat6,
	PointDataRecordFormat7,
	PointDataRecordFormat8,
	PointDataRecordFormat9,
	PointDataRecordFormat10
};

struct VGLASPoint
{
	long vertex[3];	// 顶点
	double color[3];	// 颜色
};

using VGLASPointVector = std::vector<VGLASPoint>;

/**
 * 加载彩色点云 
 **/
template<typename HeaderType, typename PointDataRecordFormat, bool hasColor>
void parseLASPointList(QFile& file, VGLASPointVector& points)
{
	points.clear();

	auto buffer = file.map(0, sizeof(HeaderType));
	auto header = *reinterpret_cast<HeaderType*>(buffer);
	file.unmap(buffer);

	buffer = file.map(header.offsetToPointData, sizeof(PointDataRecordFormat) * header.numberOfPointRecords);
	auto pointData = reinterpret_cast<PointDataRecordFormat*>(buffer);

	for (auto i = 0; i < header.numberOfPointRecords; i++)
	{
		auto& temp = *pointData;

		points.push_back(VGLASPoint{ { temp.X,temp.Y,temp.Z } });

		pointData++;
	}
}

/**
 * 加载普通点云 
 **/
template<typename HeaderType, typename PointDataRecordFormat>
void parseLASPointList(QFile& file, VGLASPointVector& points)
{
	points.clear();

	auto buffer = file.map(0, sizeof(HeaderType));
	auto header = *reinterpret_cast<HeaderType*>(buffer);
	file.unmap(buffer);

	buffer = file.map(header.offsetToPointData, sizeof(PointDataRecordFormat) * header.numberOfPointRecords);
	auto pointData = reinterpret_cast<PointDataRecordFormat*>(buffer);

	for (auto i = 0; i < header.numberOfPointRecords; i++)
	{
		auto& temp = *pointData;

		points.push_back(VGLASPoint{ { temp.X,temp.Y,temp.Z },{ temp.Red * 1.0 / 0xFFFF,temp.Green * 1.0 / 0xFFFF,temp.Blue * 1.0 / 0xFFFF } });

		pointData++;
	}
}