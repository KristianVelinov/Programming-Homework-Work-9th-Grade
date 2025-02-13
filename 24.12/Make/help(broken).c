#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"mystrings.h"

int main ()
{
    int i = 1, j = 0, stringlength, compareoutput;
    unsigned char input, buffer;
    char str1[101], str2[101];
    str1[0] = 0;
    str2[0] = 0;

    while(1)
    {
        system("cls");

        switch(i)
        {
            case 1: printf(">strlength - find string length\n strconcat - combine two strings\n strcompare - compare two strings\n esc - break the program"); break;
            case 2: printf(" strlength - find string length\n>strconcat - combine two strings\n strcompare - compare two strings\n esc - break the program"); break;
            case 3: printf(" strlength - find string length\n strconcat - combine two strings\n>strcompare - compare two strings\n esc - break the program"); break;
            case 4: printf(" strlength - find string length\n strconcat - combine two strings\n strcompare - compare two strings\n>esc - break the program"); break;
            default: if(i < 1) {i = 4;} if(i > 4) {i = 1;} break;
        }
        input = getche();

        switch (input)
        {
            case 13:
            {
                switch(i)
                {
                    case 1: 
                    {
                        system("cls");

                        printf("Enter string to find lentgh of:\n");

                        j = 0;

                        while(1)
                        {
                            buffer = getchar();
                            if(buffer == 13) break; 

                            str1[j] = buffer;
                            j++;
                        }

                        stringlength = strlength(str1);
                        printf("Length of string: %d", stringlength);
                        break;
                    }

                    case 2:
                    {
                        system("cls");

                        printf("Enter first string to combine:\n");

                        j = 0;
                        
                        while(1)
                        {
                            buffer = getchar();
                            if(buffer == 13) break; 

                            str1[j] = buffer;
                            j++;
                        }

                        printf("Enter second string to combine:\n");

                        j = 0;

                        while(1)
                        {
                            buffer = getchar();
                            if(buffer == 13) break; 

                            str2[j] = buffer;
                            j++;
                        }

                        printf("Combined string:\n");

                        strconcat(str1, str2);

                        for(j = 0; str1[3] != 0; j++)                        
                            printf("%c", str1[j]);

                        break;                        
                    }

                    case 3:
                    {
                        system("cls");

                        printf("Enter first string to compare:\n");

                        j = 0;

                        while(1)
                        {
                            buffer = getchar();
                            if(buffer == 13) break; 

                            str1[j] = buffer;
                            j++;
                        }

                        printf("Enter second string to compare:\n");

                        j = 0;

                        while(1)
                        {
                            buffer = getchar();
                            if(buffer == 13) break; 

                            str2[j] = buffer;
                            j++;
                        }

                        compareoutput = strcompare(str1, str2);

                        break;
                    }

                    case 4: return 0;
                }
                break;

            }

            case 224:
            {
                input = getche();
                if(input == 72)
                    i--;
                if(input == 80)
                    i++;
                break;
            }

            case 27: return 0;
        
            default: break;
        }
    }
}