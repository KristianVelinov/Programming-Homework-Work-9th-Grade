#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define FLAG_1 1 << 0
#define FLAG_2 1 << 1
#define FLAG_3 1 << 2
#define FLAG_4 1 << 3
#define FLAG_5 1 << 4
#define FLAG_6 1 << 5
#define FLAG_7 1 << 6
#define FLAG_8 1 << 7

unsigned char global_status = 0;

unsigned char set_flag(unsigned char status, int flag)
{
    static int change_count;
    change_count++;

    status = status | 1 << flag;
    
    global_status = status;

    return (status);
}

unsigned char clear_flag(unsigned char status, int flag)
{
    status = status ^ 1 << flag;
    if(status & 1 << flag == 1 << flag)
        status = status ^ 1 << flag; // instead of all this, i think we can just do ststus = status & ~flag
    
    global_status = status;

    return(status);
}

unsigned char check_flag(unsigned char status, int flag)
{
    if(status & 1 << flag == 1 << flag)
        return 1;
    return 0;
}

int main()
{
    unsigned char status = 0;
    char input, buffer;
    int flagchoice, output;

    while(1)
    {
        system("cls");

        printf("Press 1 to turn on ligh\nPress 2 to turn off light\nPress 3 to check is light is on\nPress 4 to exit\n\n");

        input = getchar();
        getchar();

        if(input == '4') 
            return 0;

    	system("cls");

        printf("Enter light number:   ");
        scanf("%d", &flagchoice);

        system("cls");

        switch (input)
        {
            case '1': status = set_flag(status, flagchoice - 1); break;
            case '2': status = clear_flag(status, flagchoice - 1); break;
            case '3': output = check_flag(status, flagchoice - 1); if(output == 1) printf("Light is on"); else printf("Light is off"); getchar(); scanf("%c", &buffer); break;        
            default: break;
        }
    }
}