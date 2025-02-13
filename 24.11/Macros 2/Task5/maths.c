#include<stdio.h>
#include"maths.h"

int perm (int number)
{
    int result = 1;
    int i = 0;

    while(i < number)
    {
        result = result * (number - i);
        i++;
    }

    return result;
}

int main()
{
    int input1 = 3;
    int input2 = 5;
    int input3 = 8;
    int output1;
    int output2;
    int output3;

    output1 = perm(input1);
    output2 = perm(input2);
    output3 = perm(input3);

    printf("Input: %d\nOutput: %d\n\nInput: %d\nOutput: %d\n\nInput: %d\nOutput: %d", input1, output1, input2, output2, input3, output3);

    return 0;
}