//Направете макро, което да дефинира помощен инструмент за дебъгване, който да принтира името на променливата, нейната стойност файлът в който се използва и линията от код, която принтира тази информация.

#include<stdio.h>

#define DEBUGGINGINSTRUMENT(A) printf("Name: " #A "\nValue: %d \n File: "__FILE__"\n Line: %d", A,__LINE__)

int main ()
{
    int somevalue = 7;

    DEBUGGINGINSTRUMENT(somevalue);

    return 0;
}