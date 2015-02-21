#ifndef TRIGHELPER_H
#define TRIGHELPER_H

#include <QWidget>
#include "triangle.h"

namespace Ui {
class TrigHelper;
}

class TrigHelper : public QWidget
{
    Q_OBJECT

public:
    explicit TrigHelper(QWidget *parent = 0);
    ~TrigHelper();
    Triangle triangle;

private slots:
    void on_calculate_button_clicked();

private:
    Ui::TrigHelper *ui;
    void Display(Triangle);
    void SetValuesFromForm(Triangle *triangle);
};

#endif // TRIGHELPER_H
