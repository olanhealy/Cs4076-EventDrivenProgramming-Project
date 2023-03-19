#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>



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


void MainWindow::on_pushButton_HighCal_clicked()
{
    qDebug() << "High cal";

}


void MainWindow::on_pushButton_LowCal_clicked()
{
    qDebug() << "Low cal";
}


void MainWindow::on_pushButton_3_clicked()
{
    qDebug() << "Vegetarian";
}


void MainWindow::on_actionQuit_triggered()
{
    QApplication::quit();
}


void MainWindow::on_actionRepositry_triggered()
{
    QDesktopServices::openUrl(QUrl( "https://github.com/olanhealy/Cs4076-EventDrivenProgramming-Project"));
}

