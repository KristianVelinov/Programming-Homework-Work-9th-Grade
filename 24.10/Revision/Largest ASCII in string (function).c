#include<stdio.h>

int largestascii (char string[], int sizeofstring)
{
    int i, temp, max = -1;

    for(i = 0; i < sizeofstring; i++)
    {
        temp = string[i];
        if(max < temp)
        {
            max = temp;
        }

    }

    return(max);
}

int main ()
{
    int size;
    char thestring[] = {"Ivan"}, largestnum;

    size = sizeof(thestring)/sizeof(thestring[0]);

    largestnum = largestascii(thestring, size);

    printf("%c", largestnum);

}