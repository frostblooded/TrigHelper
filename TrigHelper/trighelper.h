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

    void on_a_display_editingFinished();

    void on_b_display_editingFinished();

    void on_c_display_editingFinished();

    void on_a1_display_editingFinished();

    void on_b1_display_editingFinished();

    void on_h_display_editingFinished();

    void on_alpha_display_editingFinished();

    void on_beta_display_editingFinished();

    void on_calculate_button_clicked();

private:
    Ui::TrigHelper *ui;
    float a;
    float b;
    float c;
    float a1;
    float b1;
    float h;
    int alpha;
    int beta;
    void Calculate();
    void CalculateA();
    void CalculateB();
    void CalculateC();
    void CalculateA1();
    void CalculateB1();
    void CalculateH();
    void CalculateAlpha();
    void CalculateBeta();
    void Display();
};

#endif // TRIGHELPER_H
