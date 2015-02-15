#ifndef TRIGCALCULATOR_H
#define TRIGCALCULATOR_H

class TrigCalculator
{
public:
    static float a;
    static float b;
    static float c;
    static float a1;
    static float b1;
    static float h;
    static int alpha;
    static int beta;

    static void Initialize();
    static void Calculate();

private:
    static void CalculateA();
    static void CalculateB();
    static void CalculateC();
    static void CalculateA1();
    static void CalculateB1();
    static void CalculateH();
    static void CalculateAlpha();
    static void CalculateBeta();
};

#endif // TRIGCALCULATOR_H
