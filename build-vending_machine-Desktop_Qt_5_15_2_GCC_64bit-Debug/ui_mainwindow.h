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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pb100;
    QPushButton *pb500;
    QPushButton *pb50;
    QPushButton *pb10;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pbCoffee;
    QPushButton *pbTea;
    QPushButton *pbMilk;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        verticalLayout_3->addWidget(lcdNumber);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pb100 = new QPushButton(centralwidget);
        pb100->setObjectName(QString::fromUtf8("pb100"));

        verticalLayout->addWidget(pb100);

        pb500 = new QPushButton(centralwidget);
        pb500->setObjectName(QString::fromUtf8("pb500"));

        verticalLayout->addWidget(pb500);

        pb50 = new QPushButton(centralwidget);
        pb50->setObjectName(QString::fromUtf8("pb50"));

        verticalLayout->addWidget(pb50);

        pb10 = new QPushButton(centralwidget);
        pb10->setObjectName(QString::fromUtf8("pb10"));

        verticalLayout->addWidget(pb10);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pbCoffee = new QPushButton(centralwidget);
        pbCoffee->setObjectName(QString::fromUtf8("pbCoffee"));

        verticalLayout_2->addWidget(pbCoffee);

        pbTea = new QPushButton(centralwidget);
        pbTea->setObjectName(QString::fromUtf8("pbTea"));

        verticalLayout_2->addWidget(pbTea);

        pbMilk = new QPushButton(centralwidget);
        pbMilk->setObjectName(QString::fromUtf8("pbMilk"));

        verticalLayout_2->addWidget(pbMilk);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

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
        pb100->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        pb500->setText(QCoreApplication::translate("MainWindow", "500", nullptr));
        pb50->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        pb10->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        pbCoffee->setText(QCoreApplication::translate("MainWindow", "Coffee(100)", nullptr));
        pbTea->setText(QCoreApplication::translate("MainWindow", "Tea(150)", nullptr));
        pbMilk->setText(QCoreApplication::translate("MainWindow", "Milk(200)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
