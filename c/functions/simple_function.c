#include <stdio.h>

typedef signed int s32;

s32 sum(s32 NumOne,s32 NumTwo);
int main (void)
{
    s32 NumOne;
    s32 NumTwo;
    printf("Enter Number one : ");

    if((scanf("%d",&NumOne)) != 1)
    {
        return 1;
    }
    
    printf("Enter Number Two : ");
    if((scanf("%d",&NumTwo)) != 1)
    {
        return 1;
    }
    printf("%d + %d = %d\n",NumOne,NumTwo,sum(NumOne,NumTwo));

    return 0;
}
s32 sum(s32 NumOne,s32 NumTwo)
{
    return NumOne+NumTwo;
}
