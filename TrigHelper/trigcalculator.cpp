#include "trigcalculator.h"
#include <math.h>

double TrigCalculator::a;
double TrigCalculator::b;
double TrigCalculator::c;
double TrigCalculator::a1;
double TrigCalculator::b1;
double TrigCalculator::h;
int TrigCalculator::alpha;
int TrigCalculator::beta;

void TrigCalculator::Initialize()
{
    a = 0;
    b = 0;
    c = 0;
    a1 = 0;
    b1 = 0;
    h = 0;
    alpha = 0;
    beta = 0;
}

double cotan(double num)
{
  return (1 / tan(num));
}

void TrigCalculator::Calculate()
{
    CalculateA();
}

void TrigCalculator::CalculateA()
{
    if(b)
    {
        if(alpha)
        {
            a = tan(alpha) * b;
        }
        else if(beta)
        {
            a = cotan(beta) * b;
        }
    }
    else if(c)
    {
        if(alpha)
        {
            a = sin(alpha) * c;
        }
        else if(beta)
        {
            a = cos(beta) * c;
        }
    }
    else if(a1)
    {
        if(alpha)
        {
            a = a1 / sin(alpha);
        }
        else if(beta)
        {
            a = a1 / cos(beta);
        }
    }
    else if(h)
    {
        if(alpha)
        {
            a = h / cos(alpha);
        }
        else if(beta)
        {
            a = h / sin(beta);
        }
    }
}

void TrigCalculator::CalculateB()
{
    if(c)
    {
        if(alpha)
        {
            b = cos(alpha) * c;
        }
        else if(beta)
        {
            b = sin(beta) * c;
        }
    }
    else if(a)
    {
        if(alpha)
        {
            b = cotan(alpha) * a;
        }
        else if(beta)
        {
            b = tan(beta) * a;
        }
    }
    else if(h)
    {
        if(alpha)
        {
            b = h / sin(alpha);
        }
        else if(beta)
        {
            b = h / cos(beta);
        }
    }
    else if(b1)
    {
        if(alpha)
        {
            b = b1 / cos(alpha);
        }
        else if(beta)
        {
            b = b1 / sin(beta);
        }
    }
}

void TrigCalculator::CalculateC()
{
    if(a)
    {
        if(alpha)
        {
            c = a / sin(alpha);
        }
        else if(beta)
        {
            c = a / cos(beta);
        }
    }
    else if(b)
    {
        if(alpha)
        {
            c = b / cos(alpha);
        }
        else if(beta)
        {
            c = b / sin(beta);
        }
    }
}

void TrigCalculator::CalculateA1()
{
    if(a)
    {
        if(alpha)
        {
            a1 = sin(alpha) * a;
        }
        else if(beta)
        {
            a1 = cos(beta) * a;
        }
    }
    else if(h)
    {
        if(alpha)
        {
            a1 = tan(alpha) * h;
        }
        else if(beta)
        {
            a1 = cotan(beta) * h;
        }
    }
}

void TrigCalculator::CalculateB1()
{
    if(b)
    {
        if(alpha)
        {
            b1 = cos(alpha) * b;
        }
        else if(beta)
        {
            b1 = sin(beta) * b;
        }
    }
    else if(h)
    {
        if(alpha)
        {
            b1 = cotan(alpha) * h;
        }
        else if(beta)
        {
            b1 = tan(beta) * h;
        }
    }
}

void TrigCalculator::CalculateH()
{

}

void TrigCalculator::CalculateAlpha()
{

}

void TrigCalculator::CalculateBeta()
{

}
