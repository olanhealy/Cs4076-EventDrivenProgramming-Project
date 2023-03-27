#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRadioButton>
#include "qboxlayout.h"
#include <QGroupBox>
#include <QVBoxLayout>
#include <QCheckBox>


#include "recipe.h"
#include "mealpicker.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QVBoxLayout* checkBoxLayout;

private slots:

    void on_actionQuit_triggered();

    void on_actionRepositry_triggered();

    void on_timeSlider_valueChanged(int value);

    void on_beefBurgers_clicked();

    void on_pastaBake_clicked();

    void on_buritoBowl_clicked();

    void on_shpeardsPie_clicked();

    void on_stirFry_clicked();

    void on_chickenCurry_clicked();
    void updateCheckBox(int recipeNo);
    void on_checkBox_stateChanged(int state);



private:
    Ui::MainWindow *ui;



};
#endif // MAINWINDOW_H
