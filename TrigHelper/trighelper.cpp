#include "trigcalculator.h"
#include "trighelper.h"
#include "ui_trighelper.h"
#include <math.h>

#define CALCULATE_BUTTON_TEXT "Calculate"
#define RESET_BUTTON_TEXT "Reset"

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

void TrigHelper::AcceptValues()
{
    TrigCalculator::a = TrigHelper::ui->a_display->text().toFloat();
    TrigCalculator::b = ui->b_display->text().toFloat();
    TrigCalculator::c = ui->c_display->text().toFloat();
    TrigCalculator::a1 = ui->a1_display->text().toFloat();
    TrigCalculator::b1 = ui->b1_display->text().toFloat();
    TrigCalculator::h = ui->h_display->text().toFloat();
    TrigCalculator::alpha = ui->alpha_display->text().toFloat();
    TrigCalculator::alpha_in_radians = TrigCalculator::alpha * M_PI / 180;
    TrigCalculator::beta = ui->beta_display->text().toFloat();
    TrigCalculator::beta_in_radians = TrigCalculator::beta * M_PI / 180;
}

void TrigHelper::on_calculate_button_clicked()
{
    if(ui->calculate_button->text() == CALCULATE_BUTTON_TEXT)
    {
        AcceptValues();
        TrigCalculator::Calculate();

        ui->calculate_button->setText(RESET_BUTTON_TEXT);
    }
    else
    {
        TrigCalculator::Initialize();

        ui->calculate_button->setText(CALCULATE_BUTTON_TEXT);
    }

    Display();
}
