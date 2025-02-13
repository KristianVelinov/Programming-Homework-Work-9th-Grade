//Направете макро функция (SWAP(А, B, TYPE)), което да разменя стойностите на две променливи от произволен тип. Помощ: въведете типа като допълнителен аргумент на макро функцията. Демонстрирайте използването на подобно макро. Когато дефинирате макрото за да се чете по лесно кодът, можете да слагата “\” за да направите макрото на няколко реда.

#include<stdio.h>

#define SWAP(A, B, TYPE)\
TYPE c;\
c = A;\
A = B;\
B = c;\

int main()
{
    int A = 5, B = 4;
    printf("%d %d\n", A, B);

    SWAP(A, B, int);
    printf("%d %d", A, B);
}
