#include "errorchecker.h"
#include "trigcalculator.h"
#include <QMessageBox>
#include <math.h>

bool ErrorChecker::NoInputIsGiven()
{
    return !TrigCalculator::a && !TrigCalculator::b && !TrigCalculator::c && !TrigCalculator::a1 && !TrigCalculator::b1 && !TrigCalculator::h && !TrigCalculator::alpha && !TrigCalculator::beta;
}

bool ErrorChecker::AValueIsNegative()
{
    return TrigCalculator::a < 0 || TrigCalculator::b < 0 || TrigCalculator::c < 0 || TrigCalculator::a1 < 0 || TrigCalculator::b1 < 0 || TrigCalculator::h < 0 || TrigCalculator::alpha < 0 || TrigCalculator::beta < 0;
}

bool ErrorChecker::SidesAreImpossibleForRightTriangle()
{
    if(TrigCalculator::a && TrigCalculator::b && TrigCalculator::c)
    {
        return pow(TrigCalculator::c, 2) != pow(TrigCalculator::a, 2) + pow(TrigCalculator::b, 2);
    }
    else
    {
        return false;
    }
}

bool ErrorChecker::SumOfA1AndB1DoesntEqualC()
{
    if(TrigCalculator::a1 && TrigCalculator::b1 && TrigCalculator::c)
    {
        return TrigCalculator::a1 + TrigCalculator::b1 != TrigCalculator::c;
    }
    else
    {
        return false;
    }
}

bool ErrorChecker::A1IsntSmallerThanA()
{
    if(TrigCalculator::a1 && TrigCalculator::a)
    {
        return TrigCalculator::a <= TrigCalculator::a1;
    }
    else
    {
        return false;
    }
}

bool ErrorChecker::B1IsntSmallerThanB()
{
    if(TrigCalculator::b1 && TrigCalculator::b)
    {
        return TrigCalculator::b <= TrigCalculator::b1;
    }
    else
    {
        return false;
    }
}

bool ErrorChecker::AOrBIsSmallerThanH()
{
    if(TrigCalculator::a && TrigCalculator::h)
    {
        return TrigCalculator::a <= TrigCalculator::h;
    }
    else if(TrigCalculator::b && TrigCalculator::h)
    {
        return TrigCalculator::b <= TrigCalculator::h;
    }
    else
    {
        return false;
    }
}

bool ErrorChecker::OnlyAnglesAreEntered()
{
    return TrigCalculator::alpha && TrigCalculator::beta && !TrigCalculator::a && !TrigCalculator::b && !TrigCalculator::c && !TrigCalculator::a1 && !TrigCalculator::b1 && !TrigCalculator::h;
}

bool ErrorChecker::AnglesDontEqual90()
{
    return (TrigCalculator::alpha && TrigCalculator::beta) && TrigCalculator::alpha + TrigCalculator::beta != 90;
}

bool ErrorChecker::DisplayErrors()
{
    if(NoInputIsGiven())
    {
        QMessageBox::critical(NULL, "No input is given!", "No values are entered! Please try again!");
        return true;
    }
    else if(AValueIsNegative())
    {
        QMessageBox::critical(NULL, "A value is invalid!", "One of the values that you entered is invalid! Please try again!");
        return true;
    }
    else if(SidesAreImpossibleForRightTriangle())
    {
        QMessageBox::critical(NULL, "Triangle is impossible!", "A right triangle with sides like these doesn't exist! Please try again!");
        return true;
    }
    else if(SumOfA1AndB1DoesntEqualC())
    {
        QMessageBox::critical(NULL, "Triangle is impossible!", "The sum of A1 and B1 must be equal C! Please try again!");
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
    else if(OnlyAnglesAreEntered())
    {
        QMessageBox::critical(NULL, "Only angles are given!", "This program can't calculate if only angles are given! Please try again!");
        return true;
    }
    else if(AnglesDontEqual90())
    {
        QMessageBox::critical(NULL, "Angles don't equal 90 degrees!", "The sum of the angles should be 90 degrees! Please try again!");
        return true;
    }

    return false;
}
