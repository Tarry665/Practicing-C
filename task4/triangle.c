#include <math.h>
#include "triangle.h"

double Perimetr(double a, double b, double c){
    return a + b + c;
}

double Area(double a, double b, double c){
    double polyperimetr = Perimetr(a, b, c) / 2;
    double geron = sqrt(polyperimetr * (polyperimetr - a) * (polyperimetr - b) * (polyperimetr - c));
    return geron;
}