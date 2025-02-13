// Направете структура, която да се казва transformation. Структурата трябва състои от две полета - result (от тип long) и error (от тип символен низ - 100 символа). Структурата трябва да е декларирана в самостоятелен заглавен файл (transformation.h). Заглавния файл трябва да включва още декларацията на функция, която да превръща символен низ в съответното цяло число. Функцията трябва да връща стойност от тип структурата transformation. Ако символния низ е валидно цяло число, резултатът от трансформацията трябва да се записва във полето “result” на върнатия резултат, а полето error трябва да е празен низ (“\0”). Ако входния символен низ не е валидно цяло число в полете result на резултата трябва да е записано 0, а в полето “error” трябва да е записан символен низ, който да описва грешката. Пример: Вход = “-123” => Изход: tmp.result = -123, tmp.error = “\0”, Вход=”12ab23” => Изход: tmp.result = 0, tmp.error = “Invalid input string”. Направете сорс файл (transformation.c), който да вмъква заглавния файл и да дефинира функцията. Изпълнете първите три стъпки на компилацията до образуване на обектен файл (от сорс файла transformation.c). Направете програма (main.c), в която да използва функцията за да преобразува примерни симовлни низове в числа. Демонстрирайте как се държи функцията и при въвеждане на невалиден символен низ. Компилирайте програмата като по време на компилацията включите обектния файл получен от първите три стъпки на компилация на сорс файла transformation.c. Запишете командите по компилация на transformation.c и на програмата main.c в отделен файл и го прикачете към заданието.

#include<stdio.h>
#include"transformation.h"
#include<math.h>
#include<string.h>


transformation stringtoint (char error[])
{
    transformation transform;
    int i = 0;
    int sign = 1;

    transform.result = 0;
    transform.error[0] = 0;

    if(error[i] == '-')
    {
        sign = -1;
        i++;
    }
    if(error[i] == '+')
        i++;
      
    while(error[i] != 0)
    {
        if(error[i] >= '0' && error[i] <= '9')
        {
            transform.result = transform.result * 10 + (error[i] - '0');
        }
        else
        {
            strcpy(transform.error, "Invalid input string");
            transform.result = 0;
            return transform;
        }
        i++;
    }

    transform.result = transform.result * sign;

    return transform;
}