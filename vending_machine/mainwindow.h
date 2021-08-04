#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int money_{0};
    void changeMoney(int diff);
    void returnMoney();
    void setButtonState(int money);

private slots:
    void on_pb10_clicked();

    void on_pb50_clicked();

    void on_pb100_clicked();

    void on_pb500_clicked();

    void on_pbCoffee_clicked();

    void on_pbTea_clicked();

    void on_pbMilk_clicked();

    void on_pbReturn_clicked();

    void on_label_linkActivated(const QString &link);

    void on_label_objectNameChanged(const QString &objectName);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
