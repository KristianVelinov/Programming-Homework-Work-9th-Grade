//Направете object-like макро, което да улеснява дефинирането на масив от 5 елемента, и което да се използва за да се принтират елементите от масива. Идеята е чрез макрото да контролирате размера на масива.

#include<stdio.h>

#define ARRSIZE 5

int main ()
{
    int arr1[] = {1, 2, 5, 10, 4}, i;

    for(i = 0; i < ARRSIZE; i++)
        printf("%d ", arr1[i]);

    return 0;
}