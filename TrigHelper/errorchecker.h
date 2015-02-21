#ifndef ERRORCHECKER_H
#define ERRORCHECKER_H

class ErrorChecker
{
public:
    static bool DisplayErrors();
private:
    static bool NoInputIsGiven();
    static bool AValueIsNegative();
    static bool SidesAreImpossibleForRightTriangle();
    static bool SumOfA1AndB1DoesntEqualC();
    static bool A1IsntSmallerThanA();
    static bool B1IsntSmallerThanB();
    static bool AOrBIsSmallerThanH();
    static bool OnlyAnglesAreEntered();
    static bool AnglesDontEqual90();
};

#endif // ERRORCHECKER_H
