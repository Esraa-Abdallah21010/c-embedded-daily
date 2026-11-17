#include <stdio.h>

typedef signed int s32;
typedef unsigned char u8;

s32 * MaxMinArr(s32 Arr[5]);
int main(void)
{
    s32 Arr[5];

    printf("Input 5 values\n");
    for (u8 i=0; i<5; i++)
    {
        if ((scanf("%d",&Arr[i])) != 1)
        {
            printf("Invalid Input\n");
            return 1;
        }
    }
    s32 *Result = MaxMinArr(Arr);
    printf("Minimum value is: %d\n",Result[1]);
    printf("Maximum value is: %d\n",Result[0]);
    return 0;
}
s32 * MaxMinArr(s32 Arr[5])
{
    s32 MaxNum = Arr[0];
    s32 MinNum = Arr[0];
    static s32 Result[2];
    for (u8 i=0; i<5; i++)
    {
        if (MaxNum < Arr[i])
        {
            MaxNum = Arr[i];
        }
        else if (MinNum > Arr[i])
        {
            MinNum = Arr[i];
        }
    }
    Result[0]=MaxNum;
    Result[1]=MinNum;

    return Result;
}