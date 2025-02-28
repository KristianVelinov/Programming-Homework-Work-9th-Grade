//Направете макро, което да се казва ARRAY_SIZE, което да съдържа големина на масив. Ако макрото е дефинирано и стойността му е по-голяма от 0 и по-малка от 11 създайте масив в големина ARRAY_SIZE. Елементите в масива, трябва да са последователни степени на двойката: първия елемент е 1 (2^0), вторият 2(2^1), третият 4(2^2) и така всеки следващ елемент да е следващата степен на двойката. Програмата трябва да е направена така, че ако се промени стойността на макрото, масивът да се попълва автоматично (масивът не трябва да е ръчно зададен). Програмата трябва да принтира всеки елемент на масива на нов ред. Ако макрото не е дефинирано или стойността на макрото ARRAY_SIZE е по-голяма от 10 или по-малка от 1, програмата трябва да съдържа една единствена инструкция, която да принтира съобщение на потребителя, че не е въведен размер на масива, който се поддържа от приложението.

#include<stdio.h>
#include<math.h>

# define ARRAY_SIZE 9

int main ()
{
    #if ARRAY_SIZE > 0 && ARRAY_SIZE < 11 && defined ARRAY_SIZE

    int arr[ARRAY_SIZE], i;

    for(i = 0; i < ARRAY_SIZE; i++)
    {
        arr[i] = pow(2, i);
    }

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("\n%d", arr[i]);
    } 

    #else printf("\n Size of array is not supported");
    #endif

    return 0;
}
