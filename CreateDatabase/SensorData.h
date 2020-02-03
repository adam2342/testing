#pragma once

#include <QtCore/QObject>
#include <QtCore/QVector>
#include <QtCore/qmap.h>

class SensorData:public QObject
{
	Q_OBJECT
public:
	//SensorData();


	struct Reading
	{
		double Min;
		double Max;
		double Current;
	};
	struct SensorInfo
	{
		QString SensorName;
		QString BuildingId;
		QVector<Reading> Readings;
	};
	void generateNumberOfSensor();

	QMap<QString, SensorInfo> CombinedData;

};

