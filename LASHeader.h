#pragma once

#pragma pack(1)

//LAS文件 1.0版本公共头部
//char(1 byte)
//unsigned char(1 byte)
//short(2 bytes)
//unsigned(2 bytes)
//long (4 bytes)
//unsigned long(4 bytes)
//double(8 byte IEEE floating point format)

struct PublicHeaderBlock0
{
	char fileSignature[4];
	unsigned long reserved;
	unsigned long guidData1;
	unsigned short guidData2;
	unsigned short guidData3;
	unsigned char guidData4[8];
	unsigned char versionMajor;
	unsigned char versionMinor;
	char systemIdentifier[32];
	char generatingSoftware[32];
	unsigned short flightDateJulian;
	unsigned short year;
	unsigned short headerSize;
	unsigned long offsetToPointData;
	unsigned long numberOfVariableLengthRecords;
	unsigned char pointDataRecordFormatID;
	unsigned short pointDataRecordFormatLength;
	unsigned long numberOfPointRecords;
	unsigned long numberOfPointByReturn[5];
	double xScaleFactor;
	double yScaleFactor;
	double zScaleFactor;
	double xOffset;
	double yOffset;
	double zOffset;
	double maxX;
	double minX;
	double maxY;
	double minY;
	double maxZ;
	double minZ;
};



//LAS文件 1.1版本公共头部 
//char(1 byte)
//unsigned char(1 byte)
//short(2 bytes)
//unsigned(2 bytes)
//long (4 bytes)
//unsigned long(4 bytes)
//double(8 byte IEEE floating point format)
struct PublicHeaderBlock1
{
	char fileSignature[4];
	unsigned short fileSourceID;
	unsigned short globalEncoding;
	unsigned long projectID_GUIDData1;
	unsigned short projectID_GUIDData2;
	unsigned short projectID_GUIDData3;
	unsigned char projectID_GUIDData4[8];
	unsigned char versionMajor;
	unsigned char versionminor;
	char systemIdentifier[32];
	char generatingSoftware[32];
	unsigned short  fileCreationDayofYear;
	unsigned short	fileCreationYear;
	unsigned short headerSize;
	unsigned long offsetToPointData;
	unsigned long numberOfvariableLengthRecords;
	unsigned char pointDataRecordFormatID;
	unsigned short pointDataRecordLength;
	unsigned long numberOfPointRecords;
	unsigned long numberOfPointByReturn[5];
	double xScaleFactor;
	double yScaleFactor;
	double zScaleFactor;
	double xOffset;
	double yOffset;
	double zOffset;
	double maxX;
	double minX;
	double maxY;
	double minY;
	double maxZ;
	double minZ;
};



//LAS文件 1.2版本公共头部 
//char(1 byte)
//unsigned char(1 byte)
//short(2 bytes)
//unsigned(2 bytes)
//long (4 bytes)
//unsigned long(4 bytes)
//double(8 byte IEEE floating point format)
struct PublicHeaderBlock2
{
	char fileSignature[4];//可查看编辑器中的ASCII码，对应相应的字节序
	unsigned short fileSourceID;
	unsigned short globalEncoding;
	unsigned long projectID_GUIDData1;
	unsigned short projectID_GUIDData2;
	unsigned short projectID_GUIDData3;
	unsigned char projectID_GUIDData4[8];
	unsigned char versionMajor;//第24个字节处查看该文件的LAS版本号
	unsigned char versionminor;
	char systemIdentifier[32];
	char generatingSoftware[32];
	unsigned short  fileCreationDayofYear;
	unsigned short	fileCreationYear;
	unsigned short headerSize;
	unsigned long offsetToPointData;
	unsigned long numberOfvariableLengthRecords;
	unsigned char pointDataRecordFormatID;//从第104个字节开始，LAS 1.2 包括0，1，2，3四种点的数据格式
	unsigned short pointDataRecordLength;
	unsigned long numberOfPointRecords;
	unsigned long numberOfPointByReturn[5];
	double xScaleFactor;
	double yScaleFactor;
	double zScaleFactor;
	double xOffset;
	double yOffset;
	double zOffset;
	double maxX;
	double minX;
	double maxY;
	double minY;
	double maxZ;
	double minZ;
};



//LAS文件 1.3版本公共头部 
//char(1 byte)
//unsigned char(1 byte)
//short(2 bytes)
//unsigned(2 bytes)
//long (4 bytes)
//unsigned long(4 bytes)
//long long(8 bytes)
//unsigned long long(8 bytes)
//double(8 byte IEEE floating point format)
struct PublicHeaderBlock3
{
	char fileSignature[4];
	unsigned short fileSourceID;
	unsigned short globalEncoding;
	unsigned long projectID_GUIDData1;
	unsigned short projectID_GUIDData2;
	unsigned short projectID_GUIDData3;
	unsigned char projectID_GUIDData4[8];
	unsigned char versionMajor;
	unsigned char versionminor;
	char systemIdentifier[32];
	char generatingSoftware[32];
	unsigned short  fileCreationDayofYear;
	unsigned short	fileCreationYear;
	unsigned short headerSize;
	unsigned long offsetToPointData;
	unsigned long numberOfvariableLengthRecords;
	unsigned char pointDataRecordFormatID;
	unsigned short pointDataRecordLength;
	unsigned long numberOfPointRecords;
	unsigned long numberOfPointByReturn[5];
	double xScaleFactor;
	double yScaleFactor;
	double zScaleFactor;
	double xOffset;
	double yOffset;
	double zOffset;
	double maxX;
	double minX;
	double maxY;
	double minY;
	double maxZ;
	double minZ;
	//...
	unsigned long long startOfWaveformDataPacketRecord;
};



//LAS文件 1.4版本公共头部
//char(1 byte)
//unsigned char(1 byte)
//short(2 bytes)
//unsigned(2 bytes)
//long (4 bytes)
//unsigned long(4 bytes)
//long long(8 bytes)
//unsigned long long(8 bytes)
//float（4 byte）
//double(8 byte IEEE floating point format)
//
struct PublicHeaderBlock4 
{
	char fileSignature[4];
	unsigned short fileSourceID;
	unsigned short globalEncoding;
	unsigned long projectID_GUIDData1;
	unsigned short projectID_GUIDData2;
	unsigned short projectID_GUIDData3;
	unsigned char projectID_GUIDData4[8];
	unsigned char versionMajor;
	unsigned char versionminor;
	char systemIdentifier[32];
	char generatingSoftware[32];
	unsigned short  fileCreationDayofYear;
	unsigned short	fileCreationYear;
	unsigned short headerSize;
	unsigned long offsetToPointData;
	unsigned long numberOfvariableLengthRecords;
	unsigned char pointDataRecordFormatID;
	unsigned short pointDataRecordLength;
	unsigned long numberOfPointRecords;
	unsigned long numberOfPointByReturn[5];
	double xScaleFactor;
	double yScaleFactor;
	double zScaleFactor;
	double xOffset;
	double yOffset;
	double zOffset;
	double maxX;
	double minX;
	double maxY;
	double minY;
	double maxZ;
	double minZ;
	// ...
	unsigned long long  startOfWaveformDataPacketRecord;
	unsigned long long FEVLR;
	unsigned long NEVLR;
	unsigned long long NPR00;
	unsigned long long NPR[15];
};



//点的数据格式
//1.0版本点的数据格式，共计两种 0，1
//1.1版本点的数据格式，共计两种 0，1
//1.2版本点的数据格式，共计四种 0，1，2，3
//1.3版本点的数据格式，共计六种 0，1，2，3，4，5
//1.4版本点的数据格式，共计十一种 0-10
//0,1,4,6,9号点无颜色
struct PointDataRecordFormat0
{
	long X;
	long Y;
	long Z;
	unsigned short Intensity;
	char unused;
	unsigned char classification;
	char scanAngleRank;
	unsigned char UserData;
	unsigned short PointSourceID;

};
struct PointDataRecordFormat1 : PointDataRecordFormat0
{
	double GPSTime;
};
struct PointDataRecordFormat2 : PointDataRecordFormat0
{
	unsigned short Red;
	unsigned short Green;
	unsigned short Blue;
};

struct PointDataRecordFormat3 : PointDataRecordFormat1
{
	unsigned short Red;
	unsigned short Green;
	unsigned short Blue;
};
struct PointDataRecordFormat4 : PointDataRecordFormat1
{
	unsigned char wavePacketDescriptorIndex;
	unsigned long long byteOffsetToWaveformData;
	unsigned long waveformPacketSizeInBytes;
	float returnPointWaveformLocation;
	float x_t;
	float y_t;
	float z_t;
};
struct PointDataRecordFormat5 : PointDataRecordFormat3
{
	unsigned char wavePacketDescriptorIndex;
	unsigned long long byteOffsetToWaveformData;
	unsigned long waveformPacketSizeInBytes;
	float returnPointWaveformLocation;
	float x_t;
	float y_t;
	float z_t;
};
struct PointDataRecordFormat6
{
	long X;
	long Y;
	long Z;
	unsigned short Intensity;
	char unused[2];
	unsigned char classification;
	unsigned char UserData;
	short scanAngle;
	unsigned short PointSourceID;
	double GPSTime;
};
struct PointDataRecordFormat7 : PointDataRecordFormat6
{
	unsigned short Red;
	unsigned short Green;
	unsigned short Blue;
};
struct PointDataRecordFormat8 : PointDataRecordFormat7
{
	unsigned short NIR;
};
struct PointDataRecordFormat9 : PointDataRecordFormat6
{
	unsigned char wavePacketDescriptorIndex;
	unsigned long long byteOffsetToWaveformData;
	unsigned long waveformPacketSizeInBytes;
	float returnPointWaveformLocation;
	float x_t;
	float y_t;
	float z_t;
};
struct PointDataRecordFormat10 : PointDataRecordFormat7
{
	unsigned char wavePacketDescriptorIndex;
	unsigned long long byteOffsetToWaveformData;
	unsigned long waveformPacketSizeInBytes;
	float returnPointWaveformLocation;
	float x_t;
	float y_t;
	float z_t;
};


#pragma pack()
