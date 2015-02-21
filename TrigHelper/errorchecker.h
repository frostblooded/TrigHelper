#ifndef ERRORCHECKER_H
#define ERRORCHECKER_H

#include "triangle.h"

class ErrorChecker
{
public:
    static bool DisplayErrors(Triangle);
private:
    static double a;
    static double b;
    static double c;
    static double a1;
    static double b1;
    static double h;
    static double alpha;
    static double alpha_in_radians;
    static double beta;
    static double beta_in_radians;
    static double S;
    static double P;

    static void Initialize();

    static bool NoInputIsGiven();
    static bool MoreThan2ValuesAreEntered();
    static bool AValueIsNegative();
    static bool SumOfA1AndB1DoesntEqualC();
    static bool A1IsntSmallerThanA();
    static bool B1IsntSmallerThanB();
    static bool AOrBIsSmallerThanH();
    static bool CIsSmallerThanAOrB();
    static bool OnlyAnglesAreEntered();
    static bool AnglesDontEqual90();
};

#endif // ERRORCHECKER_H
