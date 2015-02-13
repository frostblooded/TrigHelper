#include "trighelper.h"
#include "ui_trighelper.h"

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

void TrigHelper::Calculate()
{

}

void TrigHelper::Display()
{
    ui -> lineEdit->setText("3");
    ui -> lineEdit_2->setText("3");
    ui -> lineEdit_3->setText("3");
    ui -> lineEdit_4->setText("3");
    ui -> lineEdit_5->setText("3");
    ui -> lineEdit_6->setText("3");
    ui -> lineEdit_7->setText("3");
    ui -> lineEdit_8->setText("3");
}

void TrigHelper::on_lineEdit_textChanged(const QString &arg1)
{
    Calculate();
    Display();
}

void TrigHelper::on_lineEdit_2_textChanged(const QString &arg1)
{
    Calculate();
    Display();
}

void TrigHelper::on_lineEdit_3_textChanged(const QString &arg1)
{
    Calculate();
    Display();
}

void TrigHelper::on_lineEdit_4_textChanged(const QString &arg1)
{
    Calculate();
    Display();
}

void TrigHelper::on_lineEdit_5_textChanged(const QString &arg1)
{
    Calculate();
    Display();
}

void TrigHelper::on_lineEdit_6_textChanged(const QString &arg1)
{
    Calculate();
    Display();
}

void TrigHelper::on_lineEdit_7_textChanged(const QString &arg1)
{
    Calculate();
    Display();
}

void TrigHelper::on_lineEdit_8_textChanged(const QString &arg1)
{
    Calculate();
    Display();
}
