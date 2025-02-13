#include<stdio.h>
#include<limits.h>

#define FORMATTING "\n%-22s %-22s %-22zu %-22llu %-22lld %-22s %-22llu"

int main()
{
    signed short a;
    signed int b;
    signed long c;
    signed long long d;
    unsigned short e;
    unsigned int f;
    unsigned long g;
    unsigned long long h;

    printf("%-22s %-22s %-22s %-22s %-22s %-22s %-22s", "Name", "Format", "Size", "Max Size Signed", "Min Size Signed", "Unsigned Format", "Max Unsigned");

    printf(FORMATTING, "short", "%hd", sizeof(a), SHRT_MAX, SHRT_MIN, "%hu", USHRT_MAX);
    printf(FORMATTING, "int", "%d", sizeof(b), INT_MAX, INT_MIN, "%ud", UINT_MAX);
    printf(FORMATTING, "long", "%ld", sizeof(c), LONG_MAX, LONG_MIN, "%lu", ULONG_MAX);
    printf(FORMATTING, "long long", "%lld", sizeof(d), LONG_LONG_MAX, LONG_LONG_MIN, "%llu", ULONG_LONG_MAX);

}