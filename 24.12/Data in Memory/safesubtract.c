#include<stdio.h>
#include"safeint.h"
#include"util.h"

int main (int argc, char *argv[])
{
    int n1, n2;
    SafeResult result;

    result = safestrtoint(argv[1]);
    if(result.errorflag == 0)
    {
        n1 = result.value;
    }
    else if (result.errorflag == 1)
    {
        ERRORLARGE;
        return 0;
    }
    else
    {
        ERRORSMALL;
        return 0;
    }

    result = safestrtoint(argv[2]);
    if(result.errorflag == 0)
    {
        n2 = result.value;
    }
    else if (result.errorflag == 1)
    {
        ERRORLARGE;
        return 0;
    }        
    else
    {
        ERRORSMALL;
        return 0;
    }

    result = safesubtract(n1, n2);
    if(result.errorflag == 0)
    {    
        printf("\nOutput: %d", result.value);
        return 0;
    }
    
    else if (result.errorflag == 1)
    {
        ERRORLARGE;
        return 0;
    }
    else
    {
        ERRORSMALL;
        return 0;
    }
}