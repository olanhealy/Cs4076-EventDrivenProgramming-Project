#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "LiquidIngredient.h"
#include "SolidIngredient.h"

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
    // ...

    // Create radio buttons for recipes
    chickenCurryRadioButton = new QRadioButton(chickenCurry.getName(), this);
    burritoBowlRadioButton = new QRadioButton(burritoBowl.getName(), this);
    saladRadioButton = new QRadioButton(salad.getName(), this);
    pastaDishRadioButton = new QRadioButton(pastaDish.getName(), this);

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
    ui->verticalLayout->addWidget(chickenCurryRadioButton);
    ui->verticalLayout->addWidget(burritoBowlRadioButton);
}

void MainWindow::on_lowCal_clicked()
{
    // Clear the layout
    // ...

    // Add radio buttons for low-calorie recipes
    ui->verticalLayout->addWidget(saladRadioButton);
    ui->verticalLayout->addWidget(pastaDishRadioButton);
}

void MainWindow::on_recipeRadioButton_toggled(bool checked)
{
    if (!checked) return;

    if (chickenCurryRadioButton->isChecked()) {
        ui->recipeLabel->setText(chickenCurry.toString());
    } else if (burritoBowlRadioButton->isChecked()) {
        ui->recipeLabel->setText(burritoBowl.toString());
    } else if (saladRadioButton->isChecked()) {ui->recipeLabel->setText(salad.toString());
    } else if (pastaDishRadioButton->isChecked()) {
        ui->recipeLabel->setText(pastaDish.toString());
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
