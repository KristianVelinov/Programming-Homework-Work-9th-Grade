#include<stdio.h>

int main()
{
    int arr[] = {1, 2, 4, 6, 8, 10, 21, 34, 1032}, i, j, middle, min, max, size, searchable = 34;

    size = sizeof(arr)/sizeof(arr[0]);

    min = 0;
    max = size - 1;


    while(1)
    {
        middle = (min + max) / 2;

        if(arr[middle] != searchable)
        {
            if(min == max)
            {
                printf("\nYou have done something wrong with your valuable");
                break;
            }
            
        }   

        if(arr[middle] == searchable)
        {
            printf("\nYou were searching for index = ");
            printf("%d", middle);
            break;
        } 
        else if(arr[middle] > searchable)
        {
            max = middle - 1;
            
        }
        else if(arr[middle] < searchable)
        {
            
            min = middle + 1;
        }
    }
}