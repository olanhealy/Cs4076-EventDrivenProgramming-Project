
#include "vegetarian.h"
#include "ui_vegetarian.h"

Vegetarian::Vegetarian(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Vegetarian)
{
    ui->setupUi(this);
}

Vegetarian::~Vegetarian()
{
    delete ui;
}
