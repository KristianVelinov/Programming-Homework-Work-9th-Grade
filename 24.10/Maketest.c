#include<stdio.h>

int main()
{
    int i;
    char string[] = {"Testing, testing"};

    for(i = 0; string[i] != 0; i++)    
        printf("%c", string[i]);

    return 0;
    
}