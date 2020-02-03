#include "SensorData.h"
#include <QUuid>
#include <iostream>
//
//SensorData::SensorData()
//{
//	
//}
void SensorData::generateNumberOfSensor()
{

	for (int j = 0; j < 2000; j++)
	{
		QString bname = QUuid::createUuid().toString();
		QString buildingId = QUuid::createUuid().toString();

		//AlxApplication* const app = AlxApplication::Instance();
		//TileCacheRenderer* tcr = app->ActiveDocumentView()->GetGC()->tileCacheRenderer();
		//SP<TileDataGpu> tdGpu = tcr->objectInfoManager()->tileManager()->getTileDataGpu(*constItr);
		//auto model = AlxApplication::Instance()->GetActiveModel();
		//alx::BBox2d modelBoundry = model->getExtent();
		//BBox3d box = model->getBounds();

		//double longitudeMin = modelBoundry.Min().X;
		//double longitudeMax = modelBoundry.Max().X;
		//double latitudeMax = modelBoundry.Max().Y;
		//double latitudeMin = modelBoundry.Min().Y;

		double heightMin = 0;
		double heightMax = 30;

		long long longitudeMax = 180;
		long long longitudeMin = -180;
		long long latitudeMax = 90;
		long long latitudeMin = -90;


		double x = (double)rand() / (RAND_MAX + 1) * (longitudeMax - longitudeMin)
			+ longitudeMin;
		double y = (double)rand() / (RAND_MAX + 1) * (latitudeMax - latitudeMin)
			+ latitudeMin;
		double z = (double)rand() / (RAND_MAX + 1) * (heightMax - heightMin)
			+ heightMin;


		double minLowerLimit = 20;
		double minUpperLimit = 24;

		double maxLowerLimit = 30;
		double maxUpperLimit = 34;

		double curLowerLimit = 24;
		double curUpperLimit = 30;

		SensorInfo si;

		si.SensorName = bname;
		si.BuildingId = buildingId;
		//Vec3d wp = Vec3d(x, y, z);
		//GlobeMath::LL2Geocentric(wp);
		//si.Location = wp;
		//si.LocationF = ALX2OGS::Vec3dToFloat3(si.Location);

		for (int i = 0; i < 5000; i++)
		{
			double curMin = (double)rand() / (RAND_MAX + 1) * (minUpperLimit - minLowerLimit)
				+ minLowerLimit;
			double curMax = (double)rand() / (RAND_MAX + 1) * (maxUpperLimit - maxLowerLimit)
				+ maxLowerLimit;
			double current = (double)rand() / (RAND_MAX + 1) * (curUpperLimit - curLowerLimit)
				+ curLowerLimit;

			Reading reading = { curMin, curMax, current };

			si.Readings.push_back(reading);
		}

		CombinedData.insert(buildingId, si);
	}
	QMap<QString, SensorInfo> ::Iterator itr;
	for (itr = CombinedData.begin(); itr != CombinedData.end(); itr++)
	{
		std::cout << itr.key().toStdString() << std::endl;
	}

}
