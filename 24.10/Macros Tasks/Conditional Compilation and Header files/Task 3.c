//Направете функция, която използва различен алгоритъм за сортиране в зависимост от операционната система, на която се намира. Ако операционната система е windows да се използва метод на мехурчето. Ако системата е linux да използва метод на пряката селекция. Ако операционната система е MacOS да се използва метода на прякото вмъкване. Ако операционната система не е нито една от трите, функцията да обръща масива (първият му елемент, да стане последен, втория предпоследен и т.н).

#include<stdio.h>

void bubble(int arr[], int size) 
{
    int i, j, temp;
    
    for (i = 0; i < size - 1; i++) 
    {
        for (j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\n");
    for(i = 0; i < size; i++)          
        printf("%d ", arr[i]);        
}

void selection(int arr[], int size) 
{
    int i, j, min, temp;
    
    for (i = 0; i < size - 1; i++) 
    {        
        min = i;
        for (j = i + 1; j < size; j++) 
        {
            if (arr[j] < arr[min]) 
            {
                min = j;
            }
        }
        
        if (min != i) 
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    printf("\n");
    for(i = 0; i < size; i++)          
        printf("%d ", arr[i]); 
}

void insertionSort(int arr[], int size) 
{
    int i, key, j;
    
    for (i = 1; i < size; i++) 
    {
        key = arr[i];
        j = i - 1;
        
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    printf("\n");
    for(i = 0; i < size; i++)          
        printf("%d ", arr[i]); 
}

void invert (int arr[], int size)
{
    int temp, i;

    for(i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }

    printf("\n");
    for(i = 0; i < size; i++)          
        printf("%d ", arr[i]); 
}

int main ()
{
    int i, j, key, arr[] = {5, 9, 4, 2, 10, 56, 34, 17, 13, 19, 21}, size = sizeof(arr)/sizeof(arr[0]);

    #ifdef _WIN32 
    bubble(arr, size);
    #elif defined __linux__
    selection(arr, size);
    #elif defined __APPLE__
    insertion(arr, size);
    #else
    invert(arr, size);
    #endif

    return 0;
}