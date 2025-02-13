#include<stdio.h>
#include<conio.h>

int main ()
{
    char string[51], c;
    int length, i = 0;

    printf("Enter string:\n");

    while(1)
    {
        c = getche();
        if(c == 13) break;
        string[i] = c;
        i++;
    }

    for(i = 0; string[i] != 0; i++)
        length++;

    printf("The string is %d characters long.", length);

    return 0;
}