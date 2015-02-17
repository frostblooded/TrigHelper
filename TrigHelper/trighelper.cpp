#include "trigcalculator.h"
#include "trighelper.h"
#include "ui_trighelper.h"
#include <math.h>

TrigHelper::TrigHelper(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TrigHelper)
{
    ui->setupUi(this);
    TrigCalculator::Initialize();
    Display();
}

TrigHelper::~TrigHelper()
{
    delete ui;
}

void TrigHelper::Display()
{
    ui->a_display->setText(QString::number(TrigCalculator::a));
    ui->b_display->setText(QString::number(TrigCalculator::b));
    ui->c_display->setText(QString::number(TrigCalculator::c));
    ui->a1_display->setText(QString::number(TrigCalculator::a1));
    ui->b1_display->setText(QString::number(TrigCalculator::b1));
    ui->h_display->setText(QString::number(TrigCalculator::h));
    ui->alpha_display->setText(QString::number(TrigCalculator::alpha));
    ui->beta_display->setText(QString::number(TrigCalculator::beta));
}

void TrigHelper::on_calculate_button_clicked()
{
    if(ui->calculate_button->text() == "Calculate")
    {
        TrigCalculator::AcceptValues();
        TrigCalculator::Calculate();

        ui->calculate_button->setText("Reset");
    }
    else
    {
        TrigCalculator::Initialize();

        ui->calculate_button->setText("Calculate");
    }

    Display();
}
