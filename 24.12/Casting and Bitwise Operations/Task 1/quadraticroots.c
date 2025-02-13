#include<stdio.h>
#include"quadraticroots.h"
#include<math.h>

QuadraticRootsResult findroots(double a, double b, double c)
{
    QuadraticRootsResult result;

    result.norealroots = 0;

    double D;

    D = ((b*b) - (4*a*c));

    printf("\n D: %lf\n", D);

    if(D < 0)
    {
        result.norealroots = 1;
        return result;
    }
        
    D = sqrtl(D);

    double x1, x2;

    x1 = ((-b - D)/(2*a));
    x2 = ((-b + D)/(2*a));

    result.x1 = x1;
    result.x2 = x2;

    return result;
}
