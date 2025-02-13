#include<stdio.h>

int binary_search(int ourarray[], int sizearray, int searchable)
{
    int middle, min, max;    

    min = 0;
    max = sizearray - 1;


    while(1)
    {
        middle = (min + max) / 2;

        if(ourarray[middle] != searchable)
        {
            if(min == max)
            {
                return(-1);
            }
            
        }   

        if(ourarray[middle] == searchable)
        {
            return(middle);
        } 
        else if(ourarray[middle] > searchable)
        {
            max = middle - 1;
            
        }
        else if(ourarray[middle] < searchable)
        {
            
            min = middle + 1;
        }
    }

}

int main()
{
    int array[] = {1, 2, 4, 6, 8, 10, 21, 34, 1032}, i, j, middle, min, max, size, target = 2, results;

    size = sizeof(array)/sizeof(array[0]);

    results = binary_search(array, size, target);

    if(results != -1)
    {
        printf("Index is %d", results);
    }
    else
    {
        printf("Such number wasn't found!");
    }

    
}