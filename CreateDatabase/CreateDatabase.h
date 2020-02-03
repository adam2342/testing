#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CreateDatabase.h"

class CreateDatabase : public QMainWindow
{
	Q_OBJECT

public:
	CreateDatabase(QWidget *parent = Q_NULLPTR);

private:
	Ui::CreateDatabaseClass ui;
};
