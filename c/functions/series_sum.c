#include <stdio.h>

typedef unsigned int u32;
typedef unsigned char u8;

u32 Factorial(u8 Num);
u32 SeriesSum(u8 Num);

int main(void)
{
    printf("Result = %u\n",SeriesSum(5));
    return 0;
}
u32 Factorial(u8 Num)
{
    u32 Result = 1;
    for(u8 i = 1; i <= Num ; i++)
        {
            Result *= i; 
        }
    return Result;
}
u32 SeriesSum(u8 Num)
{
    u32 Sum = 0;
    for (u8 n = 1 ; n <= Num ; n++)
    {
        Sum += Factorial(n)/n;
    }
    return Sum;
}