#ifndef SCHOOLCLASS_H_
#define SCHOOLCLASS_H_

#include<stdio.h>
#include"person.h"

struct SchoolClass
{
    struct Person person[26];
    char classletter;
    int classnumber;
    struct Person classteacher;
};

#endif