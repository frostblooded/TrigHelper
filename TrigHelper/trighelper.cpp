#include "trighelper.h"
#include "ui_trighelper.h"
#include <string.h>

TrigHelper::TrigHelper(QWidget *parent) :
    QWidget(parent),
    a(0),
    b(0),
    c(0),
    a1(0),
    b1(0),
    h(0),
    alpha(0),
    beta(0),
    ui(new Ui::TrigHelper)
{
    ui->setupUi(this);
}

TrigHelper::~TrigHelper()
{
    delete ui;
}

void TrigHelper::CalculateA()
{

}

void TrigHelper::CalculateB()
{

}

void TrigHelper::CalculateC()
{

}

void TrigHelper::CalculateA1()
{

}

void TrigHelper::CalculateB1()
{

}

void TrigHelper::CalculateH()
{

}

void TrigHelper::CalculateAlpha()
{

}

void TrigHelper::CalculateBeta()
{

}

void TrigHelper::Calculate()
{
    bool calculated_evereything = false;

    //for(int i = 0; !calculated_evereything; ++i)
    //{
    //    CalculateA();
    //}
}

void TrigHelper::Display()
{
    ui -> lineEdit->setText(QString::number(a));
    ui -> lineEdit_2->setText(QString::number(b));
    ui -> lineEdit_3->setText(QString::number(c));
    ui -> lineEdit_4->setText(QString::number(a1));
    ui -> lineEdit_5->setText(QString::number(b1));
    ui -> lineEdit_6->setText(QString::number(h));
    ui -> lineEdit_7->setText(QString::number(alpha));
    ui -> lineEdit_8->setText(QString::number(beta));
}

void TrigHelper::on_lineEdit_textChanged(const QString &arg1)
{
    a = ui->lineEdit->text().toDouble();
    Calculate();
    Display();
}

void TrigHelper::on_lineEdit_2_textChanged(const QString &arg1)
{
    b = ui->lineEdit_2->text().toFloat();
    Calculate();
    Display();
}

void TrigHelper::on_lineEdit_3_textChanged(const QString &arg1)
{
    c = ui->lineEdit_3->text().toFloat();
    Calculate();
    Display();
}

void TrigHelper::on_lineEdit_4_textChanged(const QString &arg1)
{
    a1 = ui->lineEdit_4->text().toFloat();
    Calculate();
    Display();
}

void TrigHelper::on_lineEdit_5_textChanged(const QString &arg1)
{
    b1 = ui->lineEdit_5->text().toFloat();
    Calculate();
    Display();
}

void TrigHelper::on_lineEdit_6_textChanged(const QString &arg1)
{
    h = ui->lineEdit_6->text().toFloat();
    Calculate();
    Display();
}

void TrigHelper::on_lineEdit_7_textChanged(const QString &arg1)
{
    alpha = ui->lineEdit_7->text().toInt();
    Calculate();
    Display();
}

void TrigHelper::on_lineEdit_8_textChanged(const QString &arg1)
{
    beta = ui->lineEdit_8->text().toInt();
    Calculate();
    Display();
}
