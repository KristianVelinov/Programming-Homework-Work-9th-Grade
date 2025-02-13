#include"mystrings.h"
#include<stdio.h>

int strlength(char string[])
{
    int length, i;

    for(i = 0; string[i] != 0; i++)    
        length++;

    return length;
}

void strconcat(char str1[], char str2[])
{
    int i = 0, j;

    while(str1[i] != 0)
        i++;

    for(j = 0; str2[j] != 0; j++, i++)
        str1[i] = str2[j];
}

int strcompare(char str1[], char str2[])
{
    int i = 0;

    for(i = 0; str1[i] != 0, str2[i] != 0; i++)
    {
        if(str1[i] > str2[i])
            return 1;
        
        else if(str1[i] < str2[i])
            return -1;        
    }

    return 0;
}