#include "trighelper.h"
#include "ui_trighelper.h"
#include <math.h>

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
    Display();
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

}

void TrigHelper::Display()
{
    ui -> a_display->setText(QString::number(a));
    ui -> b_display->setText(QString::number(b));
    ui -> c_display->setText(QString::number(c));
    ui -> a1_display->setText(QString::number(a1));
    ui -> b1_display->setText(QString::number(b1));
    ui -> h_display->setText(QString::number(h));
    ui -> alpha_display->setText(QString::number(alpha));
    ui -> beta_display->setText(QString::number(beta));
}



void TrigHelper::on_calculate_button_clicked()
{
    a = ui->a_display->text().toFloat();
    b = ui->b_display->text().toFloat();
    c = ui->c_display->text().toFloat();
    a1 = ui->a1_display->text().toFloat();
    b1 = ui->b1_display->text().toFloat();
    h = ui->h_display->text().toFloat();
    alpha = ui->alpha_display->text().toFloat();
    beta = ui->beta_display->text().toFloat();

    Calculate();
    Display();
}
