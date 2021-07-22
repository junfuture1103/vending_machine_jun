#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QThread>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeMoney(int diff){
    int tmp = money_ + diff;
    if (tmp >= 0){
        money_+=diff;
        ui->lcdNumber->display(money_);
    }else{
        QString err_text = ("err");
        ui->lcdNumber->display(err_text);
    }
}

void MainWindow::on_pb10_clicked()
{
    changeMoney(10);
}


void MainWindow::on_pb50_clicked()
{
    changeMoney(50);
}


void MainWindow::on_pb100_clicked()
{
    changeMoney(100);
}


void MainWindow::on_pb500_clicked()
{
    changeMoney(500);
}


void MainWindow::on_pbCoffee_clicked()
{
    changeMoney(-100);
}


void MainWindow::on_pbTea_clicked()
{
    changeMoney(-150);
}


void MainWindow::on_pbMilk_clicked()
{
    changeMoney(-200);
}

