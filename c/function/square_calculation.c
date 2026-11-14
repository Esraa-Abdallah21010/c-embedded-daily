#include <stdio.h>

typedef signed short s16;
typedef unsigned int u32;

u32 square(s16 Num);

int main (void)
{
    s16 Number = 0 ;
    printf("Enter Number from range (-32768 ====> +32767 ) :");
    if (scanf("%hd",&Number) != 1)
    {
        printf("Invalid input");
        return 1;
    }    
    printf("Square( %hd ) = %u",Number,square(Number));
    return 0;
}

u32 square(s16 Num)
{
    return (u32)Num * (u32)Num ;
}