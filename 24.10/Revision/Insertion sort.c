#include<stdio.h>

//does not work properly

int main ()
{
    int array[] = {1093, 7, 1, 10, 59, 47};

    int i, j, size, min, temp, key, index, z;

    size = sizeof(array)/sizeof(array[0]);

    
    
        for(i = 0; i < size - 1; i++)
        {
            index = i + 1;
            for(j = index; j >= 0; j--)
            {
                if(array[index] <= array[j])
                {
                    min = j;
                }
                else break;            
            }

            z = min;

            temp = array[z];

            for(z = min; z < size - 1; z++)
            {
                temp = array[z + 1];
                array[z] = temp;
            }

            temp = array[min];
            array[min] = array[index];
            array[index] = temp;
        }

    

    

    for(i = 0; i < size; i++)
    {
        printf(" %d", array[i]);
    }

    return 0;
}



