/*
Направете макро функция, която да сортира масив от 
произволен тип, и да може да сортира низходящо или 
възходящо в зависимост от аргумент, подаден на 
макрото. Пример за дефиниция на подобно макро 
функция SORT(ARRAY, SIZE, TYPE, COMPARE). 
Пример за използване на подобна макро 
функция: SORT(array, 5, int, >). Хубаво е да се 
преизползва SWAP макро функцията от задача 5. 
Когато дефинирате макрото за да се чете по лесно 
кодът, можете да слагата “\” за да направите 
макрото на няколко реда.*/



#include<stdio.h>

#define SWAP(A, B, TYPE)\
TYPE c;\
c = A;\
A = B;\
B = c;\

#define SORT(ARRAY, SIZE, TYPE, COMPARE)\
int i, j;\
char sign = COMPARE;\
\
if(sign == '>')\
{\
    for(i = 0; i < SIZE; i++)\
    {\
        for(j = 0; j < SIZE - i - 1; j++)\
        {\
            if(ARRAY[j] > ARRAY[j + 1])\
            {\
                SWAP(ARRAY[j], ARRAY[j + 1], TYPE);\
            }\
        }\
    }\
}\
\
else\
{\
    for(i = 0; i < SIZE; i++)\
    {\
        for(j = 0; j < SIZE - i - 1; j++)\
        {\
            if(ARRAY[j] < ARRAY[j + 1])\
            {\
                SWAP(ARRAY[j], ARRAY[j + 1], TYPE);\
            }\
        }\
    }\
}\

int main()
{
    int array[] = {8, 5, 1, 10, 4, 7};
    int size = sizeof(array)/sizeof(array[0]);

    SORT(array, size, int, '>');

    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}

