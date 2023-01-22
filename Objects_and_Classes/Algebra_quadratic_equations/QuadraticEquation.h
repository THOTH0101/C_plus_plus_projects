//
// Created by THOTH on 1/18/23.
//

#ifndef ALGEBRA_QUADRATIC_EQUATIONS_QUADRATICEQUATION_H
#define ALGEBRA_QUADRATIC_EQUATIONS_QUADRATICEQUATION_H

class QuadraticEquation
{
public:
    double a;
    double b;
    double c;
    QuadraticEquation(double A, double B, double C); //construct an object
    double getA(); //returns a coefficient
    double getB(); //returns b coefficient
    double getC(); //returns c coefficient
    double getDiscriminant(); //returns discriminant
    double getRoot1(); //returns first root
    double getRoot2(); //returns second root
};

#endif //ALGEBRA_QUADRATIC_EQUATIONS_QUADRATICEQUATION_H
