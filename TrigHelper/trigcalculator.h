#ifndef TRIGCALCULATOR_H
#define TRIGCALCULATOR_H

#include "triangle.h"

class TrigCalculator
{
public:
    static void Calculate(Triangle *tri);

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
    static void CalculateA();
    static void CalculateB();
    static void CalculateC();
    static void CalculateA1();
    static void CalculateB1();
    static void CalculateH();
    static void CalculateAlpha();
    static void CalculateBeta();
    static void CalculateS();
    static void CalculateP();
};

#endif // TRIGCALCULATOR_H
