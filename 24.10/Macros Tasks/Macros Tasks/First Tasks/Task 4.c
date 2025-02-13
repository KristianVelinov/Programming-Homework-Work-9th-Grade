//Дефинирайте макро функция, която да се казва COMMAND да приема два аргумента NAME и TYPE и да създава идентификатор за командна функция от типа TYPE_NAME_command. Така например COMMAND(quit, internal) да създава идентификатор internal_quit_command. Направете макро функция която да се казва DEFINE_COMMAND, която да приема два аргумента NAME и TYPE и да използва макрото COMMAND за да създаде декларация на функция от типа “void TYPE_NAME_command(void)” така например DEFINE_COMMAND(quit, external) { … } трябва да създаде дефиниция на функция “void external_quit_command(void) {...}”. Използвайте макрото за да дефинирате две функции, които да принтират просто съобщение на екрана. Извикайте тези функции в main.

#include<stdio.h>

#define COMMAND(NAME, TYPE) TYPE ##_## NAME ##_## command
#define DEFINE_COMMAND(NAME, TYPE) void TYPE ##_## NAME ##_## command(void)

DEFINE_COMMAND(function, first)
{
    printf("\nFirst is executed");
}

DEFINE_COMMAND(function, second)
{
    printf("\nSecond is exectuted");
}

int main()
{
    int quit, internal;

    first_function_command();
    second_function_command();


    return 0;
}