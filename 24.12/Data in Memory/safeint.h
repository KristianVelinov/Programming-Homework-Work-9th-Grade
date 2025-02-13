#ifndef SAFEINT_H_
#define SAFEINT_H_

typedef struct
{
    int value;
    int errorflag;

} SafeResult;

SafeResult safeadd(int num1, int num2);
SafeResult safesubtract(int num1, int num2);
SafeResult safemultiply(int num1, int num2);
SafeResult safedivide(int num1, int num2);
SafeResult safestrtoint(char str[]);

#endif