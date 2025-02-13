#include<stdio.h>
long long intobinary (int number){
    if(number == 0) return(0);    
    else return((number % 2) + 10 * intobinary(number / 2));    
}
int main (){
    int somenumber = -524287; // must be between -524 287 and 524 287
    long long binary;
    binary = intobinary(somenumber);
    printf("%lld", binary);
}