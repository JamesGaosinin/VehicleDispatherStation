#include "VehicleDispatherStation.h"
#include <QtWidgets/QApplication>
#include "DatabaseDataManager.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	// TODO Ìí¼ÓµÇÂ¼½çÃæ
	CVehicleDispatherStation w;
	w.showMaximized();
	int nRet = a.exec();
	CDatabaseDataManager::Release();

	return nRet;
}
