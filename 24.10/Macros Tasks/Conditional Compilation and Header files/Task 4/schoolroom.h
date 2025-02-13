#ifndef SCHOOLROOM_H_
#define SCHOOLROOM_H_

#include<stdio.h>
#include"person.h"

struct SchoolRoom
{
    int Roomnumber;
    struct Person person[50];
};

#endif