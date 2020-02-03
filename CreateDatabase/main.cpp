#include "CreateDatabase.h"
#include <QtWidgets/QApplication>
#include "SensorData.h"
#include "sqlite3.h"
#include <iostream>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CreateDatabase w;
	w.show();
	sqlite3* DB;
	std::string sql = "CREATE TABLE PERSON("
		"ID INT PRIMARY KEY     NOT NULL, "
		"NAME           TEXT    NOT NULL, "
		"SURNAME          TEXT     NOT NULL, "
		"AGE            INT     NOT NULL, "
		"ADDRESS        CHAR(50), "
		"SALARY         REAL );";
	int exit = 0;
	exit = sqlite3_open("example.db", &DB);
	char* messaggeError;
	exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messaggeError);

	if (exit != SQLITE_OK) {
		std::cerr << "Error Create Table" << std::endl;
		sqlite3_free(messaggeError);
	}
	else
		std::cout << "Table created Successfully" << std::endl;
	sqlite3_close(DB);
	SensorData itr;
	itr.generateNumberOfSensor();
	return a.exec();
}
