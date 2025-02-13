#ifndef PROCESSES_H_
#define PROCESSES_H_

struct Process
{
    unsigned int ID;
    char name[31];
};

extern struct Process processes[5];

extern unsigned int processcount;
extern unsigned int processID;
extern char processname[31];

unsigned int createnewprocess();
void stopprocess(int ID);

#endif