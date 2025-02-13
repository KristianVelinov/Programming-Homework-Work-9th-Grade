#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, outcomeflag = 0;
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

    for(i = 0; str1[i] != 0, str2[i] != 0; i++)
    {
        if(str1[i] > str2[i])
        {
            outcomeflag = 1;
            printf("\n1");
            break;
        }            
        
        else if(str1[i] < str2[i])
        {
            outcomeflag = 1;
            printf("\n-1");
            break;
        }                    
    }

    if(outcomeflag == 0)
        printf("\n0");

    return 0;
}