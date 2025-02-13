#include<stdio.h>
#include<string.h>

struct Student
{
    char name[21];
    int number;
    float avegrade;
};

int main ()
{
    int i;
    struct Student Pesho;

    strcpy(Pesho.name, "Pesho");

    Pesho.number = 19;

    Pesho.avegrade = 2.49;

    /*for(i = 0;1;i++)
    /{
    /    if (Pesho.name[i] == 0) break;        
    /    printf("%c", Pesho.name[i]);
    }*/

    printf("%s", Pesho.name);    
    printf("\n%d", Pesho.number);
    printf("\n%4.2f", Pesho.avegrade);

    return 0;
}