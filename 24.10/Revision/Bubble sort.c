#include<stdio.h>

int main ()
{
    int array[] = {7, 4, 10, 3, 64, 1036, 34};
    int i, j, size, temp;

    size = sizeof(array)/sizeof(array[0]);

    for(i = size; i >= 0; i--)
    {
        for(j = 0; j < i - 1; j++)
        {
            if(array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }        
    }

    printf("\n");

    for(i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
}