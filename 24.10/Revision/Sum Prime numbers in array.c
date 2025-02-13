#include<stdio.h>

int ifprime (int n)
{
    int i, div = 0;

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            div++;
            break;
        }      

    }
    if(n == 2) return 1;

    if(div > 0) return 0;
    else return 1;    
}

int main ()
{
    int arr[] = {2, 4, 8, 3, 7, 10, 5, 13, 22, 61};
    int prime = 2, sum = 0, i;

    for(i = 0; i < 10; i++)
    {
        prime = ifprime(arr[i]);
        if(prime == 1)
        {
            printf("\n%d", arr[i]);
            sum += arr[i];
        }            
        prime = 2;        
    }

    printf("\n\n%d", sum);
}

