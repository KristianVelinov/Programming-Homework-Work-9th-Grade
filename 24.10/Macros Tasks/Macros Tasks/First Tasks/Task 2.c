//Направете function-like макро, което да използва троичния оператор за сравнение за да намира по-големия от 2 елемента.

#include<stdio.h>

#define COMPARE2(a , b) a > b ? a : b

int main()
{
    int a = 10, b = 4;

    printf("%d", COMPARE2 (a, b));

    return 0;





}