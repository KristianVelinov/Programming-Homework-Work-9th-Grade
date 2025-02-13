#include<stdio.h>
#include"safeint.h"
#include<limits.h>
#include<math.h>
#include"util.h"
#include<string.h>

SafeResult safeadd (int num1, int num2)
{
    SafeResult result;
    long long sumcheck = (long long)num1 + (long long)num2;
    result.errorflag = 0;
    result.value = 0;

    if(INT_MAX < sumcheck)
    {
        ERRORLARGE;
        result.errorflag = 1;
        return result;
    }
    else if (INT_MIN > sumcheck)
    {
        ERRORSMALL;
        result.errorflag = -1;
        return result;
    }
    else
    {
        result.value = num1 + num2;
        result.errorflag = 0;
        return result;
    }    
}

SafeResult safesubtract (int num1, int num2)
{
    SafeResult result;

    long long sumcheck = num1 - num2;

    if(sumcheck > INT_MAX)
    {
        ERRORLARGE;
        result.errorflag = 1;
        return result;
    }
    else if (sumcheck < INT_MIN)
    {
        ERRORSMALL;
        result.errorflag = -1;
        return result;
    }
    else
    {
        result.value = num1 - num2;
        result.errorflag = 0;
        return result;
    }    
}

SafeResult safemultiply (int num1, int num2)
{
    SafeResult result;
    long long sumcheck = num1 * num2;

    if(sumcheck > INT_MAX)
    {
        ERRORLARGE;
        result.errorflag = 1;
        return result;
    }
    else if (sumcheck < INT_MIN)
    {
        ERRORSMALL;
        result.errorflag = -1;
        return result;
    }
    else
    {
        result.value = num1 * num2;
        result.errorflag = 0;
        return result;
    }    
}

SafeResult safedivide (int num1, int num2)
{
    SafeResult result;
    long long sumcheck = num1 / num2;

    if(sumcheck > INT_MAX)
    {
        ERRORLARGE;
        result.errorflag = 1;
        return result;
    }
    else if (sumcheck < INT_MIN)
    {
        ERRORSMALL;
        result.errorflag = -1;
        return result;
    }
    else
    {
        result.value = num1 / num2;
        result.errorflag = 0;
        return result;
    }    
}

SafeResult safestrtoint (char str[])
{
    int i, j, buffer, size;
    SafeResult result, check;

    size = strlen(str);

    for(i = pow(10, size - 1), j = 0, result.value = 0; str[j] != 0; i /= 10, j++)
    {
        check = safemultiply((str[j] - '0'), i);
        if(check.errorflag == 0)
        {
            buffer = check.value;
            check = safeadd(result.value, buffer);
            if(check.errorflag == 0)            
                result.value += buffer;
            else if(check.errorflag == 1)
            {
                ERRORLARGE;
                return check;
            }
            else
            {
                ERRORSMALL;
                return check;
            }          
        }        
        else        
            return check;        
    }

    return result;
}