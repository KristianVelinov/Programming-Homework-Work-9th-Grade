#include<stdio.h>
#include"transformation.h"

int main()
{
    char inputcorrect[] = "-4513";
    char inputincorrect[] = "516af5";

    transformation correct = stringtoint(inputcorrect);
    printf("\nFrom valid string:\n\nInput: %s\nResult: %ld\nError: %s", inputcorrect, correct.result, correct.error);

    transformation incorrect = stringtoint(inputincorrect);
    printf("\n\nFrom invalid string:\n\nInput: %s\nResult: %ld\nError: %s", inputincorrect, incorrect.result, incorrect.error);
}