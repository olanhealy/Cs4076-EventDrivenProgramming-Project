#ifndef HIGHCALORIE_H
#define HIGHCALORIE_H
#include "recipe.h"
#include <QDialog>
#include "mealpicker.h"
#include <vector>


namespace Ui {
class Highcalorie;
}

class Highcalorie : public QDialog
{
   Q_OBJECT

public:
   explicit Highcalorie(QWidget *parent = nullptr);
   ~Highcalorie();

   void createHighCalorieRecipes();
   void selectHighCalorieRecipe(int index);

signals:
   void recipeSelected(const Recipe* selectedRecipe);


private slots:
   void on_chickenCurry_clicked();

   void on_beefBurgers_clicked();

   void on_homemadePizza_clicked();

private:
   Ui::Highcalorie *ui;
   std::vector<Recipe*> highCalorieRecipes;
     void memoryMangement();

};

#endif // HIGHCALORIE_H
