#include "trigcalculator.h"
#include "trighelper.h"
#include "ui_trighelper.h"
#include "errorchecker.h"
#include "triangle.h"
#include <math.h>
#include <QMessageBox>

#define PI 3.14159265359
#define CALCULATE_BUTTON_TEXT "Calculate"
#define RESET_BUTTON_TEXT "Reset"

Triangle triangle;

TrigHelper::TrigHelper(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TrigHelper),
    triangle()
{
    ui->setupUi(this);

    ui->S_display->setEnabled(false);
    ui->P_display->setEnabled(false);

    Display(triangle);
}

TrigHelper::~TrigHelper()
{
    delete ui;
}

void TrigHelper::SetValuesFromForm(Triangle *tri)
{
    tri->a = ui->a_display->text().toDouble();
    tri->b = ui->b_display->text().toDouble();
    tri->c = ui->c_display->text().toDouble();
    tri->a1 = ui->a1_display->text().toDouble();
    tri->b1 = ui->b1_display->text().toDouble();
    tri->h = ui->h_display->text().toDouble();
    tri->alpha = ui->alpha_display->text().toDouble();
    tri->alpha_in_radians = tri->alpha * PI / 180;
    tri->beta = ui->beta_display->text().toDouble();
    tri->beta_in_radians = tri->beta * PI / 180;
}

void TrigHelper::Display(Triangle tri)
{
    ui->a_display->setText(QString::number(tri.a));
    ui->b_display->setText(QString::number(tri.b));
    ui->c_display->setText(QString::number(tri.c));
    ui->a1_display->setText(QString::number(tri.a1));
    ui->b1_display->setText(QString::number(tri.b1));
    ui->h_display->setText(QString::number(tri.h));
    ui->alpha_display->setText(QString::number(tri.alpha));
    ui->beta_display->setText(QString::number(tri.beta));
    ui->S_display->setText(QString::number(tri.S));
    ui->P_display->setText(QString::number(tri.P));
}

void TrigHelper::on_calculate_button_clicked()
{
    if(ui->calculate_button->text() == CALCULATE_BUTTON_TEXT)
    {
        SetValuesFromForm(&triangle);

        if(ErrorChecker::DisplayErrors(triangle))
            triangle.ResetValues();
        else
        {
            TrigCalculator::Calculate(&triangle);
            ui->calculate_button->setText(RESET_BUTTON_TEXT);
        }
    }
    else
    {
        triangle.ResetValues();
        ui->calculate_button->setText(CALCULATE_BUTTON_TEXT);
    }

    Display(triangle);
}
