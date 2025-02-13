#include<stdio.h>

int main ()
{
    int arr[] = {5, 6, 8, 2, 9, 10}, i, j, size, temp, sum = 0;

    size = sizeof(arr)/sizeof(arr[0]);
    printf("\n%d\n", size);

    for(i = 0; i <= size - 2; i++)
    {
        for(j = i + 1; j <= size - 1; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i = 0; i <= size - 1; i++)
    {
        
        printf("%d  ", arr[i]);
    }

    printf("\n\n");

    for(i = 0; i <= size - 1; i++)
    {
        arr[i] *= i;
        printf("%d  ", arr[i]);
    }

    for(i = 0; i <= size - 1; i++)
    {
        sum += arr[i];
    }

    printf("\n%d", sum);


    

}