#ifndef LOWCALOIRE_H
#define LOWCALOIRE_H

#include <QDialog>

namespace Ui {
class Lowcaloire;
}

class Lowcaloire : public QDialog
{
    Q_OBJECT

public:
    explicit Lowcaloire(QWidget *parent = nullptr);
    ~Lowcaloire();

private:
    Ui::Lowcaloire *ui;
};

#endif // LOWCALOIRE_H
