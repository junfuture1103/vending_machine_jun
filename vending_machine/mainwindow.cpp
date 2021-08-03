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

void MainWindow::setButtonState(int money){
    if (money >= 100){
        ui->pbCoffee->setEnabled(true);
        if(money >= 150){
            ui->pbTea->setEnabled(true);
            if (money >= 200){
                ui->pbMilk->setEnabled(true);
            }
            else{
                ui->pbMilk->setEnabled(false);
            }
        }
        else{
            ui->pbMilk->setEnabled(false);
            ui->pbTea->setEnabled(false);
        }
    }else{
        ui->pbCoffee->setEnabled(false);
        ui->pbMilk->setEnabled(false);
        ui->pbTea->setEnabled(false);
    }
}

void MainWindow::changeMoney(int diff){
    int tmp = money_ + diff;

    if (tmp >= 0){
        money_+=diff;
        ui->lcdNumber->display(money_);
        setButtonState(tmp);
    }
    else{
        return;
    }
}

void MainWindow::returnMoney()
{
    int moneyCount500 = 0;
    int moneyCount100 = 0;
    int moneyCount50 = 0;
    int moneyCount10 = 0;

    int tmp = money_;

    moneyCount500 = tmp % 500;
    tmp = tmp - moneyCount500*500;

    moneyCount100 = tmp % 100;
    tmp = tmp - moneyCount100*100;

    moneyCount50 = tmp % 50;
    tmp = tmp - moneyCount50*50;

    moneyCount10 = tmp % 10;

    money_ = 0;
    ui->lcdNumber->display(money_);
    setButtonState(money_);

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


void MainWindow::on_pbReturn_clicked()
{
    returnMoney();
}

