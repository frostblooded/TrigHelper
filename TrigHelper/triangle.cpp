#include "triangle.h"
#include "trighelper.h"

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

void ResetValues();

Triangle::Triangle()
{
    ResetValues();
}


void Triangle::ResetValues()
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
