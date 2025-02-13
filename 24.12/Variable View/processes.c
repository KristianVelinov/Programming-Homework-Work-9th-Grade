#include"processes.h"
#include<stdio.h>
#include<limits.h>
#include<string.h>

struct Process processes[5];
unsigned int processcount = 0;
unsigned int processID = 0;
char processname[31];

static unsigned int nextprocessid()
{
    if(++processID == 0)
        return 0;
    else
        return processID;

}

unsigned int createnewprocess()
{
    unsigned int NextID = nextprocessid();

    if(NextID == 0)    
        return 0;

    processes[processcount].ID = NextID;    
    strcpy(processes[processcount].name, processname);

    processcount++;

    return processID;
}

void stopprocess(int ID)
{
    int FlagIndex = 5;

    for(int i = 0; i <= 4; i++)
    {
        if(processes[i].ID == ID)
        {
            FlagIndex = i;
            break;
        }
    }
    
    while(FlagIndex <= 3)
    {
        processes[FlagIndex].ID = processes[FlagIndex + 1].ID;
        strcpy(processes[FlagIndex].name, processes[FlagIndex + 1].name);
        FlagIndex++;
    }

    processes[FlagIndex].ID = 0;
    processes[FlagIndex].name[0] = 0;

    processcount--;
}



