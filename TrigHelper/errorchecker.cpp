#include "errorchecker.h"
#include <QMessageBox>
#include <math.h>

double ErrorChecker::a;
double ErrorChecker::b;
double ErrorChecker::c;
double ErrorChecker::a1;
double ErrorChecker::b1;
double ErrorChecker::h;
double ErrorChecker::alpha;
double ErrorChecker::alpha_in_radians;
double ErrorChecker::beta;
double ErrorChecker::beta_in_radians;
double ErrorChecker::S;
double ErrorChecker::P;

void ErrorChecker::Initialize()
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

bool ErrorChecker::NoInputIsGiven()
{
    return !a && !b && !c && !a1 && !b1 && !h && !alpha && !beta;
}

bool ErrorChecker::MoreThan2ValuesAreEntered()
{
    int values_count = 0;

    if(a) values_count++;
    if(b) values_count++;
    if(c) values_count++;
    if(a1) values_count++;
    if(b1) values_count++;
    if(h) values_count++;
    if(alpha) values_count++;
    if(beta) values_count++;

    if(values_count > 2)
        return true;

    return false;
}

bool ErrorChecker::AValueIsNegative()
{
    return a < 0 || b < 0 || c < 0 || a1 < 0 || b1 < 0 || h < 0 || alpha < 0 || beta < 0;
}

bool ErrorChecker::A1IsntSmallerThanA()
{
    if(a1 && a)
        return a <= a1;
    else
        return false;
}

bool ErrorChecker::B1IsntSmallerThanB()
{
    if(b1 && b)
        return b <= b1;
    else
        return false;
}

bool ErrorChecker::AOrBIsSmallerThanH()
{
    if(a && h)
        return a <= h;
    else if(b && h)
        return b <= h;
    else
        return false;
}

bool ErrorChecker::A1OrB1IsntSmallerThanC()
{
    if(a1 && c)
    {
        if(a1 >= c)
            return true;
    }
    else if(b1 && c)
    {
        if(b1 >= c)
            return true;
    }
    else
        return false;
}

bool ErrorChecker::OnlyAnglesAreEntered()
{
    return alpha && beta && !a && !b && !c && !a1 && !b1 && !h;
}

bool ErrorChecker::AOrBIsntBiggerThanC()
{
    if(c)
    {
        if(b)
            return b >= c;
        else if(a)
            return a >= c;
    }
    else
        return false;
}

bool ErrorChecker::AlphaOrBetaIs90()
{
    if(alpha)
        return alpha == 90;
    else if(beta)
        return beta == 90;
}

bool ErrorChecker::AnglesDontEqual90()
{
    return (alpha && beta) && alpha + beta != 90;
}

bool ErrorChecker::DisplayErrors(Triangle tri)
{
    Initialize();

    a = tri.a;
    b = tri.b;
    c = tri.c;
    a1 = tri.a1;
    b1 = tri.b1;
    h = tri.h;
    alpha = tri.alpha;
    alpha_in_radians = tri.alpha_in_radians;
    beta = tri.beta;
    beta_in_radians = tri.beta_in_radians;

    if(NoInputIsGiven())
    {
        QMessageBox::critical(NULL, "No input is given!", "No values are entered! Please try again!");
        return true;
    }
    else if(MoreThan2ValuesAreEntered())
    {
        QMessageBox::critical(NULL, "Too much values are entered!", "You have entered more than 2 values! Please enter only 2 values!");
        return true;
    }
    else if(AValueIsNegative())
    {
        QMessageBox::critical(NULL, "A value is invalid!", "One of the values that you entered is negative! Please try again!");
        return true;
    }
    else if(A1IsntSmallerThanA())
    {
        QMessageBox::critical(NULL, "Triangle is impossible!", "A1 must be smaller than A! Please try again!");
        return true;
    }
    else if(B1IsntSmallerThanB())
    {
        QMessageBox::critical(NULL, "Triangle is impossible!", "B1 must be smaller than B! Please try again!");
        return true;
    }
    else if(AOrBIsSmallerThanH())
    {
        QMessageBox::critical(NULL, "Triangle is impossible!", "A1 and B1 must be bigger than H! Please try again!");
        return true;
    }
    else if(AOrBIsntBiggerThanC())
    {
        QMessageBox::critical(NULL, "Triangle is impossible!", "A and B must be smaller than C! Please try again!");
        return true;
    }
    else if(A1OrB1IsntSmallerThanC())
    {
        QMessageBox::critical(NULL, "Triangle is impossible!", "A1 and B1 must be smaller than C! Please try again!");
        return true;
    }
    else if(OnlyAnglesAreEntered())
    {
        QMessageBox::critical(NULL, "Only angles are given!", "This program can't calculate if only angles are given! Please try again!");
        return true;
    }
    else if(AlphaOrBetaIs90())
    {
        QMessageBox::critical(NULL, "Invalid angles!", "Alpha and beta must be below 90 degrees! Please try again!");
        return true;
    }
    else if(AnglesDontEqual90())
    {
        QMessageBox::critical(NULL, "Angles don't equal 90 degrees!", "The sum of the angles should be 90 degrees! Please try again!");
        return true;
    }

    return false;
}
