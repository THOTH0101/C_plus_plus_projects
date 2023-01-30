//
// Created by THOTH0101 on 1/30/23.
//

#ifndef ALGEBRA_2_2_LINEAR_EQUATIONS_LINEAREQUATION_H
#define ALGEBRA_2_2_LINEAR_EQUATIONS_LINEAREQUATION_H

class LinearEquation
{
public:
    LinearEquation(double A, double B, double C, double D, double E, double F);
    double getA();
    double getB();
    double getC();
    double getD();
    double getE();
    double getF();
    bool isSolvable();
    double getX();
    double getY();

private:
    double a;
    double b;
    double c;
    double d;
    double e;
    double f;
};

#endif //ALGEBRA_2_2_LINEAR_EQUATIONS_LINEAREQUATION_H
