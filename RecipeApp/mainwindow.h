#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRadioButton>
#include <QDesktopServices>
#include <QCheckBox>
#include <QGridLayout>
#include "Recipe.h"
#include "Ingredient.h"
#include "LiquidIngredient.h"
#include "SolidIngredient.h"

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
    void on_highCal_clicked();
    void on_lowCal_clicked();
    void on_recipeRadioButton_toggled(bool checked);
    void on_actionexit_triggered();
    void on_actionRepositry_triggered();
    void displayIngredientsCheckboxes(const Recipe& recipe);




    void on_timeSlider_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    Recipe chickenCurry;
    Recipe burritoBowl;
    Recipe salad;
    Recipe pastaDish;
    QRadioButton *chickenCurryRadioButton;
    QRadioButton *burritoBowlRadioButton;
    QRadioButton *saladRadioButton;
    QRadioButton *pastaDishRadioButton;
    shared_ptr<Recipe> selectedRecipe;
    shared_ptr<Recipe> originalRecipe;
    void updateNutritionValues();
    int remainingTime = 0;
};
#endif // MAINWINDOW_H
