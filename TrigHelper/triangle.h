#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle
{
public:
    double a;
    double b;
    double c;
    double a1;
    double b1;
    double h;
    double alpha;
    double alpha_in_radians;
    double beta;
    double beta_in_radians;
    double S;
    double P;

    Triangle();
    void ResetValues();
};

#endif // TRIANGLE_H
