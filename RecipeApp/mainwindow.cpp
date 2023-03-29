

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



{
    //initalize main program
    ui->setupUi(this);


    // Initialize recipes
    chickenCurry = new Recipe("Chicken Curry");
    burritoBowl = new Recipe("Burito Bowl");
    salad = new Recipe("Salad");
    pastaDish = new Recipe("Pasta Dish");
    carbonara = new Recipe("Carbonara");
    homemadePizza = new Recipe("Homemade Pizza");

    auto peppers = make_shared<SolidIngredient>("Peppers", 100, "g");
    auto tomatoSauce = make_shared<LiquidIngredient>("Tomato Sauce", 250, "mL");
    auto cheese = make_shared<SolidIngredient>("Cheese", 100, "g");
    auto ginger = make_shared<SolidIngredient>("Ginger", 20, "g");
    auto tomatoSauceCopy = make_shared<LiquidIngredient>(*tomatoSauce);
    auto peppersCopy = make_shared<SolidIngredient>(*peppers);
    auto cheeseCopy = make_shared<SolidIngredient>(*cheese);
    auto gingerCopy = make_shared<SolidIngredient>(*ginger);

    //add chicken curry ingredients. smart pointer makes it do memory mangement by itself
    chickenCurry->addIngredient(make_shared<SolidIngredient>("Chicken", 200, "g"));
    chickenCurry->addIngredient(make_shared<LiquidIngredient>("Coconut Milk", 250, "mL"));
    chickenCurry->addIngredient(make_shared<SolidIngredient>("Curry Powder", 10, "g"));
    chickenCurry->addIngredient(make_shared<SolidIngredient>("Rice", 10, "g"));
    chickenCurry->addIngredient(peppers);
    chickenCurry->addIngredient(gingerCopy);


    //add burito bowl ingredients
    burritoBowl->addIngredient(make_shared<SolidIngredient>("Rice", 150, ""));
    burritoBowl->addIngredient(make_shared<SolidIngredient>("Black Beans", 100, ""));
    burritoBowl->addIngredient(make_shared<SolidIngredient>("Corn", 50, ""));
    burritoBowl->addIngredient(make_shared<LiquidIngredient>("Hot Sauce", 200, ""));
    burritoBowl->addIngredient(make_shared<SolidIngredient>("Mince", 500, ""));
    burritoBowl->addIngredient(make_shared<LiquidIngredient>("Salsa", 200, ""));


    //add salad ingredients
    salad->addIngredient(make_shared<SolidIngredient>("Lettuce", 100, ""));
    salad->addIngredient(make_shared<SolidIngredient>("Tomato", 50, ""));
    salad->addIngredient(make_shared<SolidIngredient>("Cucumber", 50, ""));





    //add pasta dish ingredients
    pastaDish->addIngredient(make_shared<SolidIngredient>("Pasta", 200, "g"));
    pastaDish->addIngredient((tomatoSauce));
    pastaDish->addIngredient(cheese);
    pastaDish->addIngredient(peppersCopy);


    homemadePizza->addIngredient(tomatoSauceCopy);
    homemadePizza->addIngredient(make_shared<SolidIngredient>("pizzaBase", 50, ""));
    homemadePizza-> addIngredient(peppersCopy);
    homemadePizza->addIngredient(make_shared<SolidIngredient>("Pepperonni", 50, "g"));
    homemadePizza->addIngredient(cheeseCopy);
    homemadePizza->addIngredient(make_shared<SolidIngredient>("Mushrooms", 100, "g"));
    homemadePizza->addIngredient(make_shared<SolidIngredient>("Pineapple", 200, "g"));


    carbonara -> addIngredient(make_shared<SolidIngredient>("Spagetthi", 200, "g"));
    carbonara-> addIngredient(make_shared<LiquidIngredient>("Carbonara Sauce", 160, "ml"));



    // Create radio buttons for recipes
    chickenCurryRadioButton = new QRadioButton(chickenCurry->getName(), this);
    burritoBowlRadioButton = new QRadioButton(burritoBowl->getName(), this);
    saladRadioButton = new QRadioButton(salad->getName(), this);
    pastaDishRadioButton = new QRadioButton(pastaDish->getName(), this);
    carbonaraRadioButton = new QRadioButton(carbonara->getName(), this );
    homemadePizzaRadioButton = new QRadioButton(homemadePizza->getName(), this);



    //hide stuff dont want to appear at start of application
    chickenCurryRadioButton->hide();
    burritoBowlRadioButton->hide();
    saladRadioButton->hide();
    pastaDishRadioButton->hide();
    carbonaraRadioButton->hide();
    homemadePizzaRadioButton->hide();
    ui->recipeLabel->hide();
    ui->mealOption->hide();



    // Connect buttons to slots
    connect(ui->highCal, &QPushButton::clicked, this, &MainWindow::on_highCal_clicked);
    connect(ui->lowCal, &QPushButton::clicked, this, &MainWindow::on_lowCal_clicked);
    connect(chickenCurryRadioButton, &QRadioButton::toggled, this, &MainWindow::on_recipeRadioButton_toggled);
    connect(burritoBowlRadioButton, &QRadioButton::toggled, this, &MainWindow::on_recipeRadioButton_toggled);
    connect(saladRadioButton, &QRadioButton::toggled, this, &MainWindow::on_recipeRadioButton_toggled);
    connect(pastaDishRadioButton, &QRadioButton::toggled, this, &MainWindow::on_recipeRadioButton_toggled);
    connect(carbonaraRadioButton, &QRadioButton::toggled, this, &MainWindow::on_recipeRadioButton_toggled);
    connect(homemadePizzaRadioButton, &QRadioButton::toggled, this, &MainWindow::on_recipeRadioButton_toggled);
    connect(pastaDishRadioButton, &QRadioButton::toggled, this, &MainWindow::on_recipeRadioButton_toggled);


    connect(ui->showNutrition, &QRadioButton::toggled, this, &MainWindow::updateNutritionValues);
    connect(ui->hideNutrition, &QRadioButton::toggled, this, &MainWindow::updateNutritionValues);
    connect(chickenCurryRadioButton, &QRadioButton::toggled, this, &MainWindow::updateNutritionValues);
    connect(burritoBowlRadioButton, &QRadioButton::toggled, this, &MainWindow::updateNutritionValues);
    connect(saladRadioButton, &QRadioButton::toggled, this, &MainWindow::updateNutritionValues);
    connect(pastaDishRadioButton, &QRadioButton::toggled, this, &MainWindow::updateNutritionValues);
    connect(carbonaraRadioButton, &QRadioButton::toggled, this, &MainWindow::updateNutritionValues);
    connect(homemadePizzaRadioButton, &QRadioButton::toggled, this, &MainWindow::updateNutritionValues);
    connect(pastaDishRadioButton, &QRadioButton::toggled, this, &MainWindow::updateNutritionValues);


    //Time slider initalizing
    QString time = "TIME LEFT: ";
    QFont font;
    font.setBold(true);
    font.setPointSize(16);
    ui->timeLabel->setFont(font); //sett

    QTimer* timer = new QTimer(this); //pointer of timer to new timer
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
        ui->timeLabel->setText(timeString); //set time to display on a label
    });

}

MainWindow::~MainWindow()
{
    memoryMangement(); //deletes recipe off heap
    delete ui;


}

void MainWindow::on_highCal_clicked()
{


    // Add radio buttons for high-calorie recipes
    ui->mealLayout->addWidget(chickenCurryRadioButton);
    ui->mealLayout->addWidget(burritoBowlRadioButton);
    ui->mealLayout->addWidget(homemadePizzaRadioButton);
    chickenCurryRadioButton->show();
    burritoBowlRadioButton->show();
    homemadePizzaRadioButton->show();
    ui->mealOption->show();
}

void MainWindow::on_lowCal_clicked()
{


    // Add radio buttons for low-calorie recipes
    ui->mealLayout->addWidget(saladRadioButton);
    ui->mealLayout->addWidget(pastaDishRadioButton);
    ui->mealLayout->addWidget(carbonaraRadioButton);
    saladRadioButton->show();
    pastaDishRadioButton->show();
    carbonaraRadioButton->show();
    ui->mealOption->show();

}

void MainWindow::on_recipeRadioButton_toggled(bool checked)
{
    if (!checked) return;


    QFont titleFont;
    titleFont.setPointSize(18); // Set font size
    titleFont.setBold(true); // Set font weight to bold

    ui->recipeLabel->setFont(titleFont); //set font to the recipe label
    ui->recipeLabel->setAlignment(Qt::AlignCenter); //allign to appear in the centre

    if (chickenCurryRadioButton->isChecked()) { //if chicken ccurry picked then
        ui->recipeLabel->setText(chickenCurry->toString()); //set the name to be the toString function in recipe
        ui->recipeLabel->show(); //show it
        displayIngredientsCheckboxes(*chickenCurry); //call the display ingredient checkboxs
        selectedRecipe = make_shared<Recipe>(*chickenCurry); //again using smart pointer for more efficent memory mangement. used for updating nutrition values
        originalRecipe = make_shared<Recipe>(*chickenCurry);
    } else if (burritoBowlRadioButton->isChecked()) { //same for burrito
        ui->recipeLabel->setText(burritoBowl->toString());
        ui->recipeLabel->show();
        displayIngredientsCheckboxes(*burritoBowl);
        selectedRecipe = make_shared<Recipe>(*burritoBowl);
        originalRecipe = make_shared<Recipe>(*burritoBowl);
    } else if (saladRadioButton->isChecked()) { //same for salad
        ui->recipeLabel->setText(salad->toString());
        ui->recipeLabel->show();
        displayIngredientsCheckboxes(*salad);
        selectedRecipe = make_shared<Recipe>(*salad);
        originalRecipe = make_shared<Recipe>(*salad);
    } else if (pastaDishRadioButton->isChecked()) { //same for pastaDish
        ui->recipeLabel->setText(pastaDish->toString());
        ui->recipeLabel->show();
        displayIngredientsCheckboxes(*pastaDish);
        selectedRecipe = make_shared<Recipe>(*pastaDish);
        originalRecipe = make_shared<Recipe>(*pastaDish);
    } else if (homemadePizzaRadioButton->isChecked()) {
        ui->recipeLabel->setText(homemadePizza->toString());
        ui->recipeLabel->show();
        displayIngredientsCheckboxes(*homemadePizza);
        selectedRecipe = make_shared<Recipe>(*homemadePizza);
        originalRecipe = make_shared<Recipe>(*homemadePizza);
    } else if (carbonaraRadioButton->isChecked()) {
        ui->recipeLabel->setText(carbonara->toString());
        ui->recipeLabel->show();
        displayIngredientsCheckboxes(*carbonara);
        selectedRecipe = make_shared<Recipe>(*carbonara);
        originalRecipe = make_shared<Recipe>(*carbonara);
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
    ui->caloriesValueLabel->setFont(font); //sets fonts for all nutritio values

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
    QApplication::quit(); //quit application
}

void MainWindow::on_actionRepositry_triggered()
{
    QDesktopServices::openUrl(QUrl("https://github.com/olanhealy/Cs4076-EventDrivenProgramming-Project")); //link to repo
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
void MainWindow::memoryMangement() {
    if (chickenCurry != nullptr) { //if its not set nullptr
        delete chickenCurry; //delete it
        chickenCurry = nullptr; //let it equal nullptr
    } //same for rest
    if (burritoBowl != nullptr) {
        delete burritoBowl;
        burritoBowl = nullptr;
    }
    if (salad != nullptr) {
        delete salad;
        salad = nullptr;
    }
    if (pastaDish != nullptr) {
        delete pastaDish;
        pastaDish = nullptr;
    }
    if (carbonara != nullptr) {
        delete carbonara;
        carbonara = nullptr;
    }
}
