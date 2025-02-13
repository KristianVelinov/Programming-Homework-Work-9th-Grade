#include<stdio.h>
#include"quadraticroots.h"

int main()
{
    QuadraticRootsResult result;


    int a = 1, b = -3, c = 2;
    printf("\nInput int(%d, %d, %d):", a, b, c);

    result = findroots((double)a, (double)b, (double)c);

    if(result.x1 == result.x2 && result.norealroots == 0) printf("\nx1 = %lf\n", result.x1);
    else if((result.x1 != result.x2) && result.norealroots == 0) printf("\nx1 = %lf\nx2 = %lf\n\n", result.x1, result.x2);
    else if(result.norealroots == 1) printf("\nNo Real Roots!\n");
    

    float d = 1, e = 2, f = 1;
    printf("\nInput float(%f, %f, %f):", d, e, f);

    result = findroots((double)d, (double)e, (double)f);

    if(result.x1 == result.x2 && result.norealroots == 0) printf("\nx1 = %lf\n", result.x1);
    else if((result.x1 != result.x2) && result.norealroots == 0) printf("\nx1 = %lf\nx2 = %lf\n\n", result.x1, result.x2);
    else if(result.norealroots == 1) printf("\nNo Real Roots!\n");


    double g = 1000, h = 5000, i = 10000;
    printf("\nInput double(%lf, %lf, %lf):", g, h, i);

    result = findroots((double)g, (double)h, (double)i);

    if((result.x1 == result.x2) && result.norealroots == 0) printf("\nx1 = %lf\n", result.x1);
    else if((result.x1 != result.x2) && result.norealroots == 0) printf("\nx1 = %lf\nx2 = %lf\n\n", result.x1, result.x2);
    else if(result.norealroots == 1) printf("\nNo Real Roots!\n");

    return 0;
}