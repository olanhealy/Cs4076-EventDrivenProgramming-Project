#include "lowcaloire.h"
#include "ui_lowcaloire.h"

Lowcaloire::Lowcaloire(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Lowcaloire)
{
    ui->setupUi(this);
}

Lowcaloire::~Lowcaloire()
{
    delete ui;
}
