//Дефинирайте макро, което се казва DEBUG. Направете, функция която да сортира масив възходящо и да намира сумата на елементите, които се намират на индекси, които се делят с точност на 3 и да я принтира на екрана. Направете функцията така, че ако DEBUG макрото е дефинирано, на екрана да се принтира сортирания масив и елементите, които се намират на индекси, които се делят с точност на 3 (като допълнение на сумата)

#define DEBUG

void sortsumof3 (int arr[], int size)
{
    int i, j, temp, sum = 0;

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;                
            }
        }
    }

    for(i = 0; i < size; i++)
    {
        if(i % 3 == 0 && i != 0)        
            sum = sum + arr[i];
        
    }

    printf("\n Sum is %d", sum);

    #ifdef DEBUG
    printf("\n Array: ");
    for(i = 0; i < size; i++)          
        printf("%d ", arr[i]);        
    
    printf("\n Indexes divisible by 3: ");
    for(i = 0; i < size; i++)
    {
        if(i % 3 == 0 && i != 0)        
            printf("%d ", i);
        
    }
    #endif   
}

int main ()
{
    int arr[] = {4, 8, 1, 10, 3, 7, 5, 18, 4, 19, 23, 65, 37, 81}, size = sizeof(arr)/sizeof(arr[0]);

    sortsumof3(arr, size);
    return 0;
}