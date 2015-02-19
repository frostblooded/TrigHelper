#include "trigcalculator.h"
#include "trighelper.h"
#include "ui_trighelper.h"
#include <math.h>
#include <QMessageBox>

#define CALCULATE_BUTTON_TEXT "Calculate"
#define RESET_BUTTON_TEXT "Reset"

TrigHelper::TrigHelper(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TrigHelper)
{
    ui->setupUi(this);

    TrigCalculator::Initialize();

    ui->S_display->setEnabled(false);
    ui->P_display->setEnabled(false);

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
    ui->S_display->setText(QString::number(TrigCalculator::S));
    ui->P_display->setText(QString::number(TrigCalculator::P));
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

bool TrigHelper::AValueIsInvalid()
{
    return TrigCalculator::a < 0 || TrigCalculator::b < 0 || TrigCalculator::c < 0 || TrigCalculator::a1 < 0 || TrigCalculator::b1 < 0 || TrigCalculator::h < 0 || TrigCalculator::alpha < 0 || TrigCalculator::beta < 0;
}

bool TrigHelper::OnlyAnglesAreEntered()
{
    return TrigCalculator::alpha && TrigCalculator::beta && !TrigCalculator::a && !TrigCalculator::b && !TrigCalculator::c && !TrigCalculator::a1 && !TrigCalculator::b1 && !TrigCalculator::h;
}

void TrigHelper::on_calculate_button_clicked()
{
    if(ui->calculate_button->text() == CALCULATE_BUTTON_TEXT)
    {
        AcceptValues();

        if(AValueIsInvalid())
        {
            QMessageBox::critical(this, "A value is invalid!", "One of the values that you entered is invalid! Please try again!");
            TrigCalculator::Initialize();
        }
        else if(OnlyAnglesAreEntered())
        {
            QMessageBox::critical(this, "Only angles are given!", "This program can't calculate if only angles are given! Please try again!");
            TrigCalculator::Initialize();
        }
        else
        {
            TrigCalculator::Calculate();
            ui->calculate_button->setText(RESET_BUTTON_TEXT);
        }
    }
    else
    {
        TrigCalculator::Initialize();
        ui->calculate_button->setText(CALCULATE_BUTTON_TEXT);
    }

    Display();
}
