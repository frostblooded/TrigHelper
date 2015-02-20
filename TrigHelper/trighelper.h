#ifndef TRIGHELPER_H
#define TRIGHELPER_H

#include <QWidget>

namespace Ui {
class TrigHelper;
}

class TrigHelper : public QWidget
{
    Q_OBJECT

public:
    explicit TrigHelper(QWidget *parent = 0);
    ~TrigHelper();

private slots:
    void on_calculate_button_clicked();

private:
    Ui::TrigHelper *ui;
    void AcceptValues();
    bool AValueIsNegative();
    bool SidesAreImpossibleForRightTriangle();
    bool SumOfA1AndB1DoesntEqualC();
    bool OnlyAnglesAreEntered();
    bool AnglesDontEqual90();
    void Display();
};

#endif // TRIGHELPER_H
