#include<stdio.h>
#include<conio.h>
#include"mystrings.h"

int main ()
{
    char string[51], c;
    int length, i = 0, output;

    printf("Enter string:\n");

    while(1)
    {
        c = getche();
        if(c == 13) break;
        string[i] = c;
        i++;
    }

    output = strlength(string);

    printf("\nOutput:\n%d", output);

    return 0;
}