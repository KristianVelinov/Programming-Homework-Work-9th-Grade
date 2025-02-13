#include<stdio.h>
#include<conio.h>
#include<string.h>

int main ()
{
    char str1[101], str2[101], c;
    int i = 0, j;

    memset(str1, 0, sizeof(str1)/sizeof(str1[0])); // защото без това стринговете ми ги пълни с произволни ascii символи, които създават проблеми
    memset(str2, 0, sizeof(str2)/sizeof(str2[0]));

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

    i = 0;

    while(str1[i] != 0)
        i++;

    printf("\n\nConcatenated string:\n");

    for(j = 0; str2[j] != 0; j++, i++)
        str1[i] = str2[j];

    for(i = 0; str1[i] != 0; i++)    
        printf("%c", str1[i]);

    return 0;

}
