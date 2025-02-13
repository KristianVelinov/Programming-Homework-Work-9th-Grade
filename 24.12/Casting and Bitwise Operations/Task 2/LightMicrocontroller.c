#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

unsigned char switchlights(unsigned char lights, int number)
{
    unsigned char thelight = (1 << number);
    lights = lights ^ thelight;

    return lights;
}

void PrintState(unsigned char lights)
{
    system("cls");
    printf("Lights ");

    for(int i = 0; i <= 7; i++)
    {
        if(lights & (1 << i))
            printf("%d ", i + 1);
    }

    printf(" are On\n");
}

int main ()
{
    unsigned char lights = 0, carr;
    int lightnum;
    char selector = 1, flag = 0;

    while(1)
    {
        switch (selector)
        {
            case 1: printf(">Switch Lights\n PrintState\n Esc"); break;
            case 2: printf(" Switch Lights\n>PrintState\n Esc"); break;
            case 3: printf(" Switch Lights\n PrintState\n>Esc"); break;
        }

        carr = getch();

        switch (carr)
        {
            case 224: 
            {
                carr = getch();
                if(carr == 72){ selector--; if(selector < 1) selector = 3;}
                if(carr == 80){ selector++; if(selector > 3) selector = 1;}
                break;
            }
            case 13: flag = 1; break;
        }

        system("cls");

        if(flag == 1)
        {
            switch (selector)
            {
                case 1:                 
                    printf("\nEnter number of light to switch: \n");
                    scanf("%d", &lightnum);
                    lights = switchlights(lights, lightnum - 1);                    
                    flag = 0; 
                    break;

                case 2: 
                    PrintState(lights); 
                    flag = 0; 
                    break;

                case 3: 
                    system ("cls"); 
                    break;
            }

            if(flag == 1) break;
        }
    }
}

