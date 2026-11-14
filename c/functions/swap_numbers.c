#include <stdio.h>

typedef unsigned char u8;
typedef signed int s32;

u8 SwapNumbers(s32 *NumOne,s32 *NumTwo);

int main(void)
{
    s32 NumOne = 0;
    s32 NumTwo = 0;

    printf("Enter Number One = ");
    if (scanf("%d",&NumOne) != 1)
    {
        printf("Invalid input Number one\n");
        return 1;
    }

    printf("Enter Number Two = ");
    if (scanf("%d",&NumTwo) != 1)
    {
        printf("Invalid input Number Two\n");
        return 1;
    }
    
    if (SwapNumbers(&NumOne,&NumTwo) == 1)
    {
        printf("Invalid input\n");
    }
    else
    {
        printf("Number One = %d\n",NumOne);
        printf("Number Two = %d\n",NumTwo);
    }

    return 0;
}
u8 SwapNumbers(s32 *NumOne,s32 *NumTwo)
{
    u8 ErrorState = 0;
    s32 Temp = 0;
    if ((NumOne == NULL) || (NumTwo == NULL))
    {
        ErrorState = 1;
    }
    else
    {
        Temp = *NumOne;
        *NumOne = *NumTwo;
        *NumTwo = Temp;
    }
    return ErrorState;
}