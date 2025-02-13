#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main ()
{
    int i = 1;
    unsigned char input;

    while(1)
    {
        system("cls");

        switch(i)
        {
            case 1: printf(">strlength - find string length\n strconcat\n strcompare\n esc"); break;
            case 2: printf(" strlength\n>strconcat - combine two strings\n strcompare\n esc"); break;
            case 3: printf(" strlength\n strconcat\n>strcompare - compare two strings\n esc"); break;
            case 4: printf(" strlength\n strconcat\n strcompare\n>esc - break the program"); break;
            default:  break;
        }
        input = getche();

        

        if(input == 224)
        {
            input = getche();
            if(input == 72)
                i--;
            if(input == 80)
                i++;
        }
        if(input == 27) return 0;

        if(i < 1) 
        {
            i = 4;
        } 
        if(i > 4) 
        {
            i = 1;
        }
    }
}
