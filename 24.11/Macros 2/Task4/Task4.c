#include<stdio.h>
#include<math.h>

int main ()
{
    long arr[] = {2, 4, 6, 10, 15, 20};
    int i;

    for(i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)    
        arr[i] = pow(arr[i], 4); 

    for(i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
        printf("%ld ", arr[i]);

    return 0;
}