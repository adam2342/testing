/********************************************************************************
** Form generated from reading UI file 'CreateDatabase.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEDATABASE_H
#define UI_CREATEDATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateDatabaseClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CreateDatabaseClass)
    {
        if (CreateDatabaseClass->objectName().isEmpty())
            CreateDatabaseClass->setObjectName(QString::fromUtf8("CreateDatabaseClass"));
        CreateDatabaseClass->resize(600, 400);
        menuBar = new QMenuBar(CreateDatabaseClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        CreateDatabaseClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CreateDatabaseClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CreateDatabaseClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(CreateDatabaseClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        CreateDatabaseClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(CreateDatabaseClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CreateDatabaseClass->setStatusBar(statusBar);

        retranslateUi(CreateDatabaseClass);

        QMetaObject::connectSlotsByName(CreateDatabaseClass);
    } // setupUi

    void retranslateUi(QMainWindow *CreateDatabaseClass)
    {
        CreateDatabaseClass->setWindowTitle(QCoreApplication::translate("CreateDatabaseClass", "CreateDatabase", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateDatabaseClass: public Ui_CreateDatabaseClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEDATABASE_H
