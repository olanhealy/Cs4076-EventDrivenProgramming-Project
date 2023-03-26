#ifndef VEGETARIAN_H
#define VEGETARIAN_H

#include <QDialog>

namespace Ui {
class Vegetarian;
}

class Vegetarian : public QDialog
{
    Q_OBJECT

public:
    explicit Vegetarian(QWidget *parent = nullptr);
    ~Vegetarian();

private:
    Ui::Vegetarian *ui;
};

#endif // VEGETARIAN_H
