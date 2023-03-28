#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "LiquidIngredient.h"
#include "SolidIngredient.h"
#include <QGridLayout>
#include <QCheckBox>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , chickenCurry("Chicken Curry")
    , burritoBowl("Burrito Bowl")
    , salad("Salad")
    , pastaDish("Pasta Dish")
{
    ui->setupUi(this);

    // Initialize recipes
    chickenCurry.addIngredient(make_shared<SolidIngredient>("Chicken", 200, "g"));
    chickenCurry.addIngredient(make_shared<LiquidIngredient>("Coconut Milk", 250, "mL"));
    chickenCurry.addIngredient(make_shared<SolidIngredient>("Curry Powder", 10, "g"));

    burritoBowl.addIngredient(make_shared<SolidIngredient>("Rice", 150, "g"));
    burritoBowl.addIngredient(make_shared<SolidIngredient>("Black Beans", 100, "g"));
    burritoBowl.addIngredient(make_shared<SolidIngredient>("Corn", 50, "g"));

    salad.addIngredient(make_shared<SolidIngredient>("Lettuce", 100, "g"));
    salad.addIngredient(make_shared<SolidIngredient>("Tomato", 50, "g"));
    salad.addIngredient(make_shared<SolidIngredient>("Cucumber", 50, "g"));

    pastaDish.addIngredient(make_shared<SolidIngredient>("Pasta", 200, "g"));
    pastaDish.addIngredient(make_shared<LiquidIngredient>("Tomato Sauce", 250, "mL"));
    pastaDish.addIngredient(make_shared<SolidIngredient>("Cheese", 100, "g"));
    // ...

    // Create radio buttons for recipes
    chickenCurryRadioButton = new QRadioButton(chickenCurry.getName(), this);
    burritoBowlRadioButton = new QRadioButton(burritoBowl.getName(), this);
    saladRadioButton = new QRadioButton(salad.getName(), this);
    pastaDishRadioButton = new QRadioButton(pastaDish.getName(), this);

    chickenCurryRadioButton->hide();
    burritoBowlRadioButton->hide();
    saladRadioButton->hide();
    pastaDishRadioButton->hide();
    ui->recipeLabel->hide();
    ui->mealOption->hide();



    // Connect buttons to slots
    connect(ui->highCal, &QPushButton::clicked, this, &MainWindow::on_highCal_clicked);
    connect(ui->lowCal, &QPushButton::clicked, this, &MainWindow::on_lowCal_clicked);
    connect(chickenCurryRadioButton, &QRadioButton::toggled, this, &MainWindow::on_recipeRadioButton_toggled);
    connect(burritoBowlRadioButton, &QRadioButton::toggled, this, &MainWindow::on_recipeRadioButton_toggled);
    connect(saladRadioButton, &QRadioButton::toggled, this, &MainWindow::on_recipeRadioButton_toggled);
    connect(pastaDishRadioButton, &QRadioButton::toggled, this, &MainWindow::on_recipeRadioButton_toggled);
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_highCal_clicked()
{
    // Clear the layout
    // ...

    // Add radio buttons for high-calorie recipes
    ui->mealLayout->addWidget(chickenCurryRadioButton);
    ui->mealLayout->addWidget(burritoBowlRadioButton);
    chickenCurryRadioButton->show();
    burritoBowlRadioButton->show();
    ui->mealOption->show();
}

void MainWindow::on_lowCal_clicked()
{
    // Clear the layout
    // ...

    // Add radio buttons for low-calorie recipes
    ui->mealLayout->addWidget(saladRadioButton);
    ui->mealLayout->addWidget(pastaDishRadioButton);


    saladRadioButton->show();
    pastaDishRadioButton->show();
    ui->mealOption->show();

}

void MainWindow::on_recipeRadioButton_toggled(bool checked)
{
    if (!checked) return;

    QFont titleFont;
    titleFont.setPointSize(18); // Set font size
    titleFont.setBold(true); // Set font weight to bold

    ui->recipeLabel->setFont(titleFont);
    ui->recipeLabel->setAlignment(Qt::AlignCenter);

    if (chickenCurryRadioButton->isChecked()) {
        ui->recipeLabel->setText(chickenCurry.toString());
         ui->recipeLabel->show();
        displayIngredientsCheckboxes(chickenCurry);
    } else if (burritoBowlRadioButton->isChecked()) {
        ui->recipeLabel->setText(burritoBowl.toString());
        ui->recipeLabel->show();
        displayIngredientsCheckboxes(burritoBowl);
    } else if (saladRadioButton->isChecked()) {
        ui->recipeLabel->setText(salad.toString());
         ui->recipeLabel->show();
        displayIngredientsCheckboxes(salad);
    } else if (pastaDishRadioButton->isChecked()) {
        ui->recipeLabel->setText(pastaDish.toString());
         ui->recipeLabel->show();
        displayIngredientsCheckboxes(pastaDish);
    }
}
void MainWindow::displayIngredientsCheckboxes(const Recipe& recipe)
{
    // Clear the layout
    QLayoutItem *item;
    while ((item = ui->ingredientsLayout->takeAt(0)) != nullptr) {
        delete item->widget();
        delete item;
    }



    // Create checkboxes for each ingredient and add them to the GridLayout

    for (const auto &ingredient : recipe.getIngredients()) {
        QCheckBox *ingredientCheckbox = new QCheckBox(ingredient->toString(), this);

        ui->ingredientsLayout->addWidget(ingredientCheckbox);

    }
}


void MainWindow::on_actionexit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionRepositry_triggered()
{
    QDesktopServices::openUrl(QUrl("https://github.com/olanhealy/Cs4076-EventDrivenProgramming-Project"));
}
