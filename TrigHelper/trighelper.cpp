#include "trigcalculator.h"
#include "trighelper.h"
#include "ui_trighelper.h"
#include "errorchecker.h"
#include <math.h>
#include <QMessageBox>

#define PI 3.14159265359
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
    TrigCalculator::a = TrigHelper::ui->a_display->text().toDouble();
    TrigCalculator::b = ui->b_display->text().toDouble();
    TrigCalculator::c = ui->c_display->text().toDouble();
    TrigCalculator::a1 = ui->a1_display->text().toDouble();
    TrigCalculator::b1 = ui->b1_display->text().toDouble();
    TrigCalculator::h = ui->h_display->text().toDouble();
    TrigCalculator::alpha = ui->alpha_display->text().toDouble();
    TrigCalculator::alpha_in_radians = TrigCalculator::alpha * PI / 180;
    TrigCalculator::beta = ui->beta_display->text().toDouble();
    TrigCalculator::beta_in_radians = TrigCalculator::beta * PI / 180;
}

void TrigHelper::on_calculate_button_clicked()
{
    if(ui->calculate_button->text() == CALCULATE_BUTTON_TEXT)
    {
        AcceptValues();

        if(ErrorChecker::DisplayErrors())
        {
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
