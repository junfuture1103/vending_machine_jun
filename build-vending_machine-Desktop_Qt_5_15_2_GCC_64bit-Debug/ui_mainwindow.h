/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLCDNumber *lcdNumber;
    QPushButton *pb10;
    QPushButton *pb500;
    QPushButton *pb100;
    QPushButton *pb50;
    QPushButton *pbCoffee;
    QPushButton *pbMilk;
    QPushButton *pbTea;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(250, 110, 191, 121));
        pb10 = new QPushButton(centralwidget);
        pb10->setObjectName(QString::fromUtf8("pb10"));
        pb10->setGeometry(QRect(180, 270, 89, 25));
        pb500 = new QPushButton(centralwidget);
        pb500->setObjectName(QString::fromUtf8("pb500"));
        pb500->setGeometry(QRect(240, 390, 89, 25));
        pb100 = new QPushButton(centralwidget);
        pb100->setObjectName(QString::fromUtf8("pb100"));
        pb100->setGeometry(QRect(280, 330, 89, 25));
        pb50 = new QPushButton(centralwidget);
        pb50->setObjectName(QString::fromUtf8("pb50"));
        pb50->setGeometry(QRect(230, 300, 89, 25));
        pbCoffee = new QPushButton(centralwidget);
        pbCoffee->setObjectName(QString::fromUtf8("pbCoffee"));
        pbCoffee->setGeometry(QRect(440, 270, 89, 25));
        pbMilk = new QPushButton(centralwidget);
        pbMilk->setObjectName(QString::fromUtf8("pbMilk"));
        pbMilk->setGeometry(QRect(440, 340, 89, 25));
        pbTea = new QPushButton(centralwidget);
        pbTea->setObjectName(QString::fromUtf8("pbTea"));
        pbTea->setGeometry(QRect(460, 300, 89, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pb10->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        pb500->setText(QCoreApplication::translate("MainWindow", "500", nullptr));
        pb100->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        pb50->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        pbCoffee->setText(QCoreApplication::translate("MainWindow", "Coffee(100)", nullptr));
        pbMilk->setText(QCoreApplication::translate("MainWindow", "Milk(200)", nullptr));
        pbTea->setText(QCoreApplication::translate("MainWindow", "Tea(150)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
