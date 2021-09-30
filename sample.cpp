#include <osgUtil/Optimizer>

#include "LASParser.h"

#include <qdebug.h>
#include <QDir>

osg::Node *readNode(const std::string &filename)
{
	//parsing
	QString filePath = QString::fromStdString(filename);
	filePath = QDir::toNativeSeparators(filePath);

	QFile file(filePath);
	if (!file.open(QFile::ReadOnly | QFile::Truncate))
	{
		// ...
		qDebug() << "打开文件失败";
	}

	auto buffer = file.map(25, 1);

	auto version = LASVersion(*buffer);

	file.unmap(buffer);

	VGLASPointVector points;

	switch (version)
	{
	case LASVersion::Version_1_0:
	{
		buffer = file.map(104, 1);
		auto format = LASPointDataFormat(*buffer);
		file.unmap(buffer);
		switch (format)
		{
		case LASPointDataFormat::PointDataRecordFormat0:
			parseLASPointList<PublicHeaderBlock0, PointDataRecordFormat0, false>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat1:
			parseLASPointList<PublicHeaderBlock0, PointDataRecordFormat1, false>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat2:
			break;
		case LASPointDataFormat::PointDataRecordFormat3:
			break;
		case LASPointDataFormat::PointDataRecordFormat4:
			break;
		case LASPointDataFormat::PointDataRecordFormat5:
			break;
		case LASPointDataFormat::PointDataRecordFormat6:
			break;
		case LASPointDataFormat::PointDataRecordFormat7:
			break;
		case LASPointDataFormat::PointDataRecordFormat8:
			break;
		case LASPointDataFormat::PointDataRecordFormat9:
			break;
		case LASPointDataFormat::PointDataRecordFormat10:
			break;
		default:
			break;
		}
		break;
	}
	case LASVersion::Version_1_1:
	{
		buffer = file.map(104, 1);
		auto format = LASPointDataFormat(*buffer);
		file.unmap(buffer);
		switch (format)
		{
		case LASPointDataFormat::PointDataRecordFormat0:
			parseLASPointList<PublicHeaderBlock1, PointDataRecordFormat0, false>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat1:
			parseLASPointList<PublicHeaderBlock1, PointDataRecordFormat1, false>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat2:
			break;
		case LASPointDataFormat::PointDataRecordFormat3:
			break;
		case LASPointDataFormat::PointDataRecordFormat4:
			break;
		case LASPointDataFormat::PointDataRecordFormat5:
			break;
		case LASPointDataFormat::PointDataRecordFormat6:
			break;
		case LASPointDataFormat::PointDataRecordFormat7:
			break;
		case LASPointDataFormat::PointDataRecordFormat8:
			break;
		case LASPointDataFormat::PointDataRecordFormat9:
			break;
		case LASPointDataFormat::PointDataRecordFormat10:
			break;
		default:
			break;
		}
		break;
	}
	case LASVersion::Version_1_2:
	{
		buffer = file.map(104, 1);
		auto format = LASPointDataFormat(*buffer);
		file.unmap(buffer);
		switch (format)
		{
		case LASPointDataFormat::PointDataRecordFormat0:
			parseLASPointList<PublicHeaderBlock2, PointDataRecordFormat0, false>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat1:
			parseLASPointList<PublicHeaderBlock2, PointDataRecordFormat1, false>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat2:
			parseLASPointList<PublicHeaderBlock2, PointDataRecordFormat2>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat3:
			parseLASPointList<PublicHeaderBlock2, PointDataRecordFormat3>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat4:
			break;
		case LASPointDataFormat::PointDataRecordFormat5:
			break;
		case LASPointDataFormat::PointDataRecordFormat6:
			break;
		case LASPointDataFormat::PointDataRecordFormat7:
			break;
		case LASPointDataFormat::PointDataRecordFormat8:
			break;
		case LASPointDataFormat::PointDataRecordFormat9:
			break;
		case LASPointDataFormat::PointDataRecordFormat10:
			break;
		default:
			break;
		}
		break;
	}
	case LASVersion::Version_1_3:
	{
		buffer = file.map(104, 1);
		auto format = LASPointDataFormat(*buffer);
		file.unmap(buffer);
		switch (format)
		{
		case LASPointDataFormat::PointDataRecordFormat0:
			parseLASPointList<PublicHeaderBlock3, PointDataRecordFormat0, false>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat1:
			parseLASPointList<PublicHeaderBlock3, PointDataRecordFormat1, false>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat2:
			parseLASPointList<PublicHeaderBlock3, PointDataRecordFormat2>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat3:
			parseLASPointList<PublicHeaderBlock3, PointDataRecordFormat3>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat4:
			parseLASPointList<PublicHeaderBlock3, PointDataRecordFormat4, false>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat5:
			parseLASPointList<PublicHeaderBlock3, PointDataRecordFormat5>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat6:
			break;
		case LASPointDataFormat::PointDataRecordFormat7:
			break;
		case LASPointDataFormat::PointDataRecordFormat8:
			break;
		case LASPointDataFormat::PointDataRecordFormat9:
			break;
		case LASPointDataFormat::PointDataRecordFormat10:
			break;
		default:
			break;
		}
		break;
	}
	case LASVersion::Version_1_4:
	{
		buffer = file.map(104, 1);
		auto format = LASPointDataFormat(*buffer);
		file.unmap(buffer);
		switch (format)
		{
		case LASPointDataFormat::PointDataRecordFormat0:
			parseLASPointList<PublicHeaderBlock4, PointDataRecordFormat0, false>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat1:
			parseLASPointList<PublicHeaderBlock4, PointDataRecordFormat1, false>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat2:
			parseLASPointList<PublicHeaderBlock4, PointDataRecordFormat2>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat3:
			parseLASPointList<PublicHeaderBlock4, PointDataRecordFormat3>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat4:
			parseLASPointList<PublicHeaderBlock4, PointDataRecordFormat4, false>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat5:
			parseLASPointList<PublicHeaderBlock4, PointDataRecordFormat5>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat6:
			parseLASPointList<PublicHeaderBlock4, PointDataRecordFormat6, false>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat7:
			parseLASPointList<PublicHeaderBlock4, PointDataRecordFormat7>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat8:
			parseLASPointList<PublicHeaderBlock4, PointDataRecordFormat8>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat9:
			parseLASPointList<PublicHeaderBlock4, PointDataRecordFormat9, false>(file, points);
			break;
		case LASPointDataFormat::PointDataRecordFormat10:
			parseLASPointList<PublicHeaderBlock4, PointDataRecordFormat10>(file, points);
			break;
		default:
			break;
		}
		break;
	}
	default:
		break;
	}

	osg::ref_ptr<osg::Geode> geode = new osg::Geode;
	osg::ref_ptr<osg::Geometry> geom = new osg::Geometry;
	osg::ref_ptr<osg::Vec3Array> vec3array = new osg::Vec3Array;
	osg::ref_ptr<osg::Vec4Array> vec4Color = new osg::Vec4Array;

	osgUtil::Optimizer o;

	for (auto &p : points)
	{
		vec3array->push_back(osg::Vec3(p.vertex[0], p.vertex[1], p.vertex[2]));
		vec4Color->push_back(osg::Vec4(p.color[0], p.color[1], p.color[2], 1.0f));
	}

	geom->setVertexArray(vec3array);
	geom->setColorArray(vec4Color);

	geom->setColorBinding(osg::Geometry::BIND_PER_VERTEX);
	geom->addPrimitiveSet(new osg::DrawArrays(osg::PrimitiveSet::POINTS, 0, points.size())); //需要顶点的个数

	geode->addDrawable(geom);
	o.optimize(geode, osgUtil::Optimizer::ALL_OPTIMIZATIONS);

	return geode.release();
}