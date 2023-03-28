#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "LiquidIngredient.h"
#include "SolidIngredient.h"
#include <QGridLayout>
#include <QCheckBox>
#include <QTimer>
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
    burritoBowl.addIngredient(make_shared<LiquidIngredient>("Hot Sauce", 200, "ml"));
     burritoBowl.addIngredient(make_shared<LiquidIngredient>("Mince", 500, "g"));

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


    connect(ui->showNutrition, &QRadioButton::toggled, this, &MainWindow::updateNutritionValues);
    connect(ui->hideNutrition, &QRadioButton::toggled, this, &MainWindow::updateNutritionValues);
    connect(chickenCurryRadioButton, &QRadioButton::toggled, this, &MainWindow::updateNutritionValues);
    connect(burritoBowlRadioButton, &QRadioButton::toggled, this, &MainWindow::updateNutritionValues);
    connect(saladRadioButton, &QRadioButton::toggled, this, &MainWindow::updateNutritionValues);
    connect(pastaDishRadioButton, &QRadioButton::toggled, this, &MainWindow::updateNutritionValues);

    QString time = "TIME LEFT: ";
    QFont font;
    font.setBold(true);
    font.setPointSize(16);
    ui->timeLabel->setFont(font);

    QTimer* timer = new QTimer(this);
    timer->setObjectName("timer");
    connect(timer, &QTimer::timeout, this, [=]() {
        // Decrease remaining time by 1 second
        remainingTime--;
        if (remainingTime < 0) {
            // Stop the timer when time is up
            timer->stop();
            return;
        }

        // Update display of remaining time
        QString timeString = time +  QString::number(remainingTime / 60) + ":" + QString::number(remainingTime % 60).rightJustified(2, '0');
        ui->timeLabel->setText(timeString);
    });

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
        selectedRecipe = make_shared<Recipe>(chickenCurry);
        originalRecipe = make_shared<Recipe>(chickenCurry);
    } else if (burritoBowlRadioButton->isChecked()) {
        ui->recipeLabel->setText(burritoBowl.toString());
        ui->recipeLabel->show();
        displayIngredientsCheckboxes(burritoBowl);
        originalRecipe = make_shared<Recipe>(burritoBowl);
        selectedRecipe = make_shared<Recipe>(burritoBowl);
    } else if (saladRadioButton->isChecked()) {
        ui->recipeLabel->setText(salad.toString());
         ui->recipeLabel->show();
        displayIngredientsCheckboxes(salad);
        selectedRecipe = make_shared<Recipe>(salad);
        originalRecipe = make_shared<Recipe>(salad);
    } else if (pastaDishRadioButton->isChecked()) {
        ui->recipeLabel->setText(pastaDish.toString());
         ui->recipeLabel->show();
        displayIngredientsCheckboxes(pastaDish);
        selectedRecipe = make_shared<Recipe>(pastaDish);
        originalRecipe = make_shared<Recipe>(pastaDish);

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
void MainWindow::updateNutritionValues() {


    QString fat = "FAT: ";
    QString protein = "PROTEIN: ";
    QString carbs = "CARBS: ";
    QString calories = "CALORIES: ";
    QFont font;
    font.setBold(true);
    font.setPointSize(16);
    ui->proteinValueLabel->setFont(font);
    ui->carbsValueLabel->setFont(font);
    ui->fatValueLabel->setFont(font);
    ui->caloriesValueLabel->setFont(font);

    // Check if a recipe is selected
    if (this->selectedRecipe != nullptr) {
        // Check if the radio button for showing nutrition is checked
        if (this->ui->showNutrition->isChecked()) {
            // Update nutrition value labels with the selected recipe's nutrition information
            const Nutrition& nutritionInfo = selectedRecipe->getNutrition();
            this->ui->fatValueLabel->setText(fat + QString::number(nutritionInfo.getFat()) + "g");
            this->ui->proteinValueLabel->setText(protein + QString::number(nutritionInfo.getProtein()) + "g");
            this->ui->carbsValueLabel->setText(carbs + QString::number(nutritionInfo.getCarbs()) + "g");
            this->ui->caloriesValueLabel->setText(calories + "" + QString::number(nutritionInfo.getCalories()) + "kcal");
        } else {
            // Clear the nutrition value labels
            this->ui->fatValueLabel->setText("");
            this->ui->proteinValueLabel->setText("");
            this->ui->carbsValueLabel->setText("");
            this->ui->caloriesValueLabel->setText("");
        }
    } else {
        // Clear the nutrition value labels
        this->ui->fatValueLabel->setText("");
        this->ui->proteinValueLabel->setText("");
        this->ui->carbsValueLabel->setText("");
        this->ui->caloriesValueLabel->setText("");
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


void MainWindow::on_timeSlider_valueChanged(int value)
{
    remainingTime = value * 60; // Set remaining time in seconds based on slider value
    QString timeString = QString::number(remainingTime / 60) + ":" + QString::number(remainingTime % 60).rightJustified(2, '0');
    ui->timeLabel->setText(timeString); // Update display of remaining time
    QTimer::singleShot(1000, this, [=]() {
        // Start the timer to decrease remaining time gradually
        ui->timeSlider->setEnabled(false); // Disable the slider while timer is running
        QTimer* timer = this->findChild<QTimer*>("timer");
        timer->start(1000);
    });
}
