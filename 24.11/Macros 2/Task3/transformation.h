#ifndef TRANSFORMATION_H_
#define TRANSFORMATION_H_

typedef struct 
{
    long result;
    char error[101];
}transformation;

transformation stringtoint(char error[]);

#endif