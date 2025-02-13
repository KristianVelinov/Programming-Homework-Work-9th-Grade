#include<stdio.h>

int main ()
{
    int i, j, index, selected, size, temp;
    int array[] = {1093, 7, 1, 10, 59, 47};

    size = sizeof(array)/sizeof(array[0]);

    for(i = 0; i < size - 1; i++)
    {
        selected = array[i];
        index = i;

        for(j = i; j < size; j++)
        {
            if(array[j] < array[index])
            {
                index = j;
            }
        }
        
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
        
    }

    for(i = 0; i < size; i++)
    {
        printf(" %d", array[i]);
    }

    return 0;
}