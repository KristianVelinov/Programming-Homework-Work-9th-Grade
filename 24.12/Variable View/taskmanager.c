#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"processes.h"
#include<string.h>

void createprocess()
{
    char c[31];
    int i = 0, output;
    char buffer;

    system("cls");

    if(processcount == 5)
    {
        printf("\nThe maximum number of processes has been reached, terminate process to add a new one!");
        buffer = getchar();
        return;
    }

    printf("\nEnter name of process:\n");
    
    do
    {
        c[i] = getche();
        if(c[i] == 13)
        {
            c[i] = 0;
            break;
        }            
        i++;
    } while (1);

    strcpy(processname, c);

    output = createnewprocess();
        
    if(output == 0)
        printf("\nNo new process ID's were found!"); 

    buffer = getchar();
       
}

void printprocess()
{
    int i = 0;
    char buffer;

    system("cls");

    if(processcount == 0)
        printf("No processes currently active!");

    for(i = 0; i < processcount; i++)
    {
        printf("\nName: %s ; ID: %d", processes[i].name, processes[i].ID);
    }

    scanf("%c", &buffer);
}

void deleteprocess()
{
    int ID;

    system("cls");

    printf("\nEnter ID of process to terminate:\n");    
    scanf("%d", &ID);
    getchar();

    stopprocess(ID);
}

int main()
{
    char input;

    while(1)
    {
        system("cls");

        printf("Press 1 to create process\nPress 2 to view list of processes\nPress 3 to terminate process\nPress 4 to terminate program\n");

        input = getchar();
        getchar();

        switch (input)
        {
            case '1': createprocess(); break;
            case '2': printprocess(); break;
            case '3': deleteprocess(); break;
            case '4': return 0;    
            default: break;
        }
    }    
}