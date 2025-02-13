#include<stdio.h>

int lowestcommonmultiplier(a, b)
{
    int mult1 = a, mult2 = b;

    while(1)
    {
        if(mult1 < mult2)
        {
            mult1 = mult1 + a;
        }
        else if (mult1 > mult2)
        {
            mult2 = mult2 + b;
        }
        else        
            return(mult1);
        
    }
}

int main()
{
    int a = 12, b = 18, lowcommult;

    lowcommult = lowestcommonmultiplier(a, b);
    printf("%d", lowcommult);

    return 0;
}