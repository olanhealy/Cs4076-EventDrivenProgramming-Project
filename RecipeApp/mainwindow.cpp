#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_actionexit_triggered()
{
 QApplication::quit();
}
void MainWindow::on_actionRepositry_triggered()
{
    QDesktopServices::openUrl(QUrl( "https://github.com/olanhealy/Cs4076-EventDrivenProgramming-Project"));
}
