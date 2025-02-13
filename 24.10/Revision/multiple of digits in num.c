#include<stdio.h>

int main ()
{
    int num = 12345, i, j, n, multpl = 1;

    while(num > 0)
    {
        n = num % 10;
        multpl *= n;
        num /= 10;
        printf("\n%d", n);
    }

    printf("\n\n%d", multpl);
}