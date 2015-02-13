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
    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_lineEdit_4_textChanged(const QString &arg1);

    void on_lineEdit_5_textChanged(const QString &arg1);

    void on_lineEdit_6_textChanged(const QString &arg1);

    void on_lineEdit_7_textChanged(const QString &arg1);

    void on_lineEdit_8_textChanged(const QString &arg1);

    void on_a_display_textChanged(const QString &arg1);

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
