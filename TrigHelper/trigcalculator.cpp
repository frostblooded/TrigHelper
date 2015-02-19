#include "trigcalculator.h"
#include "trighelper.h"
#include <math.h>
#include <QMessageBox>

#define PI 3.14159265359
#define MAX_TRIES_TO_CALCULATE 30

double TrigCalculator::a;
double TrigCalculator::b;
double TrigCalculator::c;
double TrigCalculator::a1;
double TrigCalculator::b1;
double TrigCalculator::h;
double TrigCalculator::alpha;
double TrigCalculator::alpha_in_radians;
double TrigCalculator::beta;
double TrigCalculator::beta_in_radians;
double TrigCalculator::S;
double TrigCalculator::P;

double cotan(double num)
{
  return (1 / tan(num));
}

void TrigCalculator::Initialize()
{
    a = 0;
    b = 0;
    c = 0;
    a1 = 0;
    b1 = 0;
    h = 0;
    alpha = 0;
    alpha_in_radians = 0;
    beta = 0;
    beta_in_radians = 0;
    S = 0;
    P = 0;
}

void TrigCalculator::Calculate()
{
    bool everything_found = false;

    for(int i = 0; !everything_found; i++)
    {
        CalculateA();
        CalculateB();
        CalculateC();
        CalculateA1();
        CalculateB1();
        CalculateH();
        CalculateAlpha();
        CalculateBeta();
        CalculateS();
        CalculateP();

        if(a && b && c && a1 && b1 && h && alpha && beta)
        {
            everything_found = true;
        }

        if(i > MAX_TRIES_TO_CALCULATE)
        {
            QMessageBox::critical(NULL, "Fatal error!", "The program failed to calculate the values! Please contact the programmer!");
            break;
        }
    }
}

void TrigCalculator::CalculateA()
{
    if(!a)
    {
        if(b)
        {
            if(alpha_in_radians)
            {
                a = tan(alpha_in_radians) * b;
            }
            else if(beta_in_radians)
            {
                a = cotan(beta_in_radians) * b;
            }
            else if(c)
            {
                a = sqrt(pow(c, 2) - pow(b, 2));
            }
        }
        else if(c)
        {
            if(alpha_in_radians)
            {
                a = sin(alpha_in_radians) * c;
            }
            else if(beta_in_radians)
            {
                a = cos(beta_in_radians) * c;
            }
            else if(a1)
            {
                a = sqrt(a1 * c);
            }
        }
        else if(a1)
        {
            if(alpha_in_radians)
            {
                a = a1 / sin(alpha_in_radians);
            }
            else if(beta_in_radians)
            {
                a = a1 / cos(beta_in_radians);
            }
            else if(h)
            {
                a = sqrt(pow(h, 2) + pow(a1, 2));
            }
        }
        else if(h)
        {
            if(alpha_in_radians)
            {
                a = h / cos(alpha_in_radians);
            }
            else if(beta_in_radians)
            {
                a = h / sin(beta_in_radians);
            }
        }
    }
}

void TrigCalculator::CalculateB()
{
    if(!b)
    {
        if(c)
        {
            if(alpha_in_radians)
            {
                b = cos(alpha_in_radians) * c;
            }
            else if(beta_in_radians)
            {
                b = sin(beta_in_radians) * c;
            }
            else if(b1)
            {
                b = sqrt(b1 * c);
            }
            else if(a)
            {
                b = sqrt(pow(c, 2) - pow(a, 2));
            }
        }
        else if(a)
        {
            if(alpha_in_radians)
            {
                b = cotan(alpha_in_radians) * a;
            }
            else if(beta_in_radians)
            {
                b = tan(beta_in_radians) * a;
            }
        }
        else if(h)
        {
            if(alpha_in_radians)
            {
                b = h / sin(alpha_in_radians);
            }
            else if(beta_in_radians)
            {
                b = h / cos(beta_in_radians);
            }
            else if(b1)
            {
                b = sqrt(pow(h, 2) + pow(b1, 2));
            }
        }
        else if(b1)
        {
            if(alpha_in_radians)
            {
                b = b1 / cos(alpha_in_radians);
            }
            else if(beta_in_radians)
            {
                b = b1 / sin(beta_in_radians);
            }
        }
    }
}

void TrigCalculator::CalculateC()
{
    if(!c)
    {
        if(a)
        {
            if(alpha_in_radians)
            {
                c = a / sin(alpha_in_radians);
            }
            else if(beta_in_radians)
            {
                c = a / cos(beta_in_radians);
            }
            else if(a1)
            {
                c = pow(a, 2) / a1;
            }
            else if(b)
            {
                c = sqrt(pow(a, 2) + pow(b, 2));
            }
        }
        else if(b)
        {
            if(alpha_in_radians)
            {
                c = b / cos(alpha_in_radians);
            }
            else if(beta_in_radians)
            {
                c = b / sin(beta_in_radians);
            }
            else if(b1)
            {
                c = pow(b, 2) / b1;
            }
        }
        else if(a1 && b1)
        {
            c = a1 + b1;
        }
    }
}

void TrigCalculator::CalculateA1()
{
    if(!a1)
    {
        if(a)
        {
            if(alpha_in_radians)
            {
                a1 = sin(alpha_in_radians) * a;
            }
            else if(beta_in_radians)
            {
                a1 = cos(beta_in_radians) * a;
            }
            else if(c)
            {
                a1 = pow(a, 2) / c;
            }
            else if(h)
            {
                a1 = sqrt(pow(a, 2) - pow(h, 2));
            }
        }
        else if(h)
        {
            if(alpha_in_radians)
            {
                a1 = tan(alpha_in_radians) * h;
            }
            else if(beta_in_radians)
            {
                a1 = cotan(beta_in_radians) * h;
            }
            else if(b1)
            {
                a1 = pow(h, 2) / b1;
            }
        }
        else if(c && b1)
        {
            a1 = c - b1;
        }
    }
}

void TrigCalculator::CalculateB1()
{
    if(!b1)
    {
        if(b)
        {
            if(alpha_in_radians)
            {
                b1 = cos(alpha_in_radians) * b;
            }
            else if(beta_in_radians)
            {
                b1 = sin(beta_in_radians) * b;
            }
            else if(c)
            {
                b1 = pow(b, 2) / c;
            }
            else if(h)
            {
                b1 = sqrt(pow(b, 2) - pow(h, 2));
            }
        }
        else if(h)
        {
            if(alpha_in_radians)
            {
                b1 = cotan(alpha_in_radians) * h;
            }
            else if(beta_in_radians)
            {
                b1 = tan(beta_in_radians) * h;
            }
            else if(a1)
            {
                b1 = pow(h, 2) / a1;
            }
        }
        else if(c && a1)
        {
            b1 = c - a1;
        }
    }
}

void TrigCalculator::CalculateH()
{
    if(!h)
    {
        if(b)
        {
            if(alpha_in_radians)
            {
                h = sin(alpha_in_radians) * b;
            }
            else if(beta_in_radians)
            {
                h = cos(beta_in_radians) * b;
            }
            else if(b1)
            {
                h = sqrt(pow(b, 2) - pow(b1, 2));
            }
        }
        else if(b1)
        {
            if(alpha_in_radians)
            {
                h = tan(alpha_in_radians) * b1;
            }
            else if(beta_in_radians)
            {
                h = cotan(beta_in_radians) * b1;
            }
            else if(a1)
            {
                h = sqrt(a1 * b1);
            }
        }
        else if(a)
        {
            if(alpha_in_radians)
            {
                h = cos(alpha_in_radians) * a;
            }
            else if(beta_in_radians)
            {
                h = sin(beta_in_radians) * a;
            }
            else if(a1)
            {
                h = sqrt(pow(a, 2) - pow(a1, 2));
            }
        }
        else if(a1)
        {
            if(alpha_in_radians)
            {
                h = cotan(alpha_in_radians) * a1;
            }
            else if(beta_in_radians)
            {
                h = tan(beta_in_radians) * a1;
            }
        }
    }
}

void TrigCalculator::CalculateAlpha()
{
    if(!alpha)
    {
        if(beta)
        {
            alpha = 90 - beta;
        }
        else if(a && c)
        {
            alpha = asin(a / c) * 180 / PI;
        }
    }
}

void TrigCalculator::CalculateBeta()
{
    if(!beta)
    {
        if(alpha)
        {
            beta = 90 - alpha;
        }
        else if(b && c)
        {
            beta = asin(b / c) * 180 / PI;
        }
    }
}

void TrigCalculator::CalculateS()
{
    if(!S)
    {
        if(a && b)
        {
            S = (a * b) / 2;
        }
        else if(c && h)
        {
            S = (c * h) / 2;
        }
    }
}

void TrigCalculator::CalculateP()
{
    if(!P)
    {
        if(a && b && c)
        {
            P = a + b + c;
        }
    }
}
