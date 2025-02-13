#include<stdio.h>
#include<conio.h>
#include"mystrings.h"

int main()
{
    int i = 0, output;
    char str1[101], str2[101], c;

    printf("\nEnter string1:\n");

    while(1)
    {
        c = getche();
        if(c == 13) break;
        str1[i] = c;
        i++;
    }
    
    i = 0;
    printf("\nEnter string2:\n");

    while(1)
    {
        c = getche();
        if(c == 13) break;
        str2[i] = c;
        i++;
    }
   
    output = strcompare(str1, str2);
    printf("\nOutput:%d", output);

    return 0;
}