#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "highcalorie.h"
#include "lowcaloire.h"
#include "vegetarian.h"
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

private slots:
    void on_pushButton_HighCal_clicked();

    void on_pushButton_LowCal_clicked();



    void on_actionQuit_triggered();

    void on_actionRepositry_triggered();

    void on_timeSlider_valueChanged(int value);

    void on_pushButton_Vegetarian_clicked();
    void onMealSelected(const mealPicker* selectedRecipe);

private:
    Ui::MainWindow *ui;
     QLayout* scrollAreaLayout;
};
#endif // MAINWINDOW_H
