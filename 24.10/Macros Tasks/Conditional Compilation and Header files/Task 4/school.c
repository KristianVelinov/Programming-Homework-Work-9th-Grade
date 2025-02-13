//Направете заглавен файл “person.h”, който да декларира структура “Person”, която да съдържа информация, за името на човека (масив от 20 символа), неговото презиме (масив от 20 символа) неговата фамилия (масив от 20 символа) и в коя година е роден (цяло число). Направете заглавен файл “schoolclass.h”, който да вмъква заглавния файл “person.h” и да декларира структура “SchoolClass” (клас), която да съдържа масив от 26 ученика (от структурата Person), паралелката на класа  (символ), номера на класа (цяло число) и класен ръководител (поле от тип Person). Направете заглавен файл “schoolroom.h”, в който вмъкнете заглавния файл “person.h” и в който декларирайте структруа “SchoolRoom”, която да съдържа номер на стаята (цяло число), и информация кои хора се намират в тази стая в момента (масив от 50 елемента от тип Person). Направете файл, който да се казва school.c и в него вмъкнете заглавните файлове “schoolclass.h” и ‘schoolroom.h” и направете структура “School”, която да съдържа училищни класове (масив от тип SchoolClass с размер 20) и училищни стаи (масив от тип SchoolRoom с размер 10). В файла school.c в main декларирайте променлива от тип school.

#include<stdio.h>
#include<string.h>
#include"schoolclass.h"
#include"schoolroom.h"

struct School
{
    struct SchoolClass schclass[20];
    struct SchoolRoom room[10];
};

int main ()
{
    struct School Tues;

    strcpy(Tues.schclass[0].person[0].Forename, "Petar");
    strcpy(Tues.schclass[0].person[0].Middlename, "Ivanov");
    strcpy(Tues.schclass[0].person[0].Lastname, "Balkanski");
    Tues.schclass[0].person[0].YearOfBirth = 2009;


    Tues.schclass[0].classletter = 'b';
    Tues.schclass[0].classnumber = 9;

    strcpy(Tues.schclass[0].classteacher.Forename, "Raina");
    strcpy(Tues.schclass[0].classteacher.Middlename, "Veselinova");
    strcpy(Tues.schclass[0].classteacher.Lastname, "Bulgaska");
    Tues.schclass[0].classteacher.YearOfBirth = 1944;



    Tues.room[0].Roomnumber = 9218;

    strcpy(Tues.room[0].person[0].Forename, "Petar");
    strcpy(Tues.room[0].person[0].Middlename, "Ivanov");
    strcpy(Tues.room[0].person[0].Lastname, "Balkanski");
    Tues.room[0].person[0].YearOfBirth = 2009;  

    return 0;
}