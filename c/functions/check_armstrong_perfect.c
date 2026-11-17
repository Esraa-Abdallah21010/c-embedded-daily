#include <stdio.h>

typedef unsigned int u32;
typedef signed int s32;
typedef unsigned char u8;
typedef signed char s8;

void Armstrong(u32 Num);
void Perfect(u32 Num);
int main (void)
{
    u32 Num = 0;
    printf("Enter Number : ");
    if ((scanf("%u",&Num)) != 1)
    {
        printf("Invalid Input\n");
        return 1;
    }
    Armstrong(Num);
    Perfect(Num);

    return 0;
}
void Armstrong(u32 Num)
{
    u32 n = 1;
    u32 Tmp = Num;
    u32 Result = 0;
    u8 count = 0;
    while (Num != (Num % n))
    {
        n *= 10;
        count ++;
    }
    n=1;
    for (u8 i=0; i<count; i++)
    {
        u32 Mult = 1;
        Tmp %= 10; 
        for(u8 x=0; x<count; x++)
        {
            Mult *= Tmp;
        }
        Result += Mult;
        n *=10;
        Tmp = Num /n;
    }
    if (Num == Result)
    {
        printf("The %u is an Armstrong number.\n",Num);
    }
    else
    {
        printf("The %u is Not an Armstrong number.\n",Num);
    }
}
void Perfect(u32 Num)
{
    u32 sum = 0;
    u32 Tmp = Num;
    while(Tmp>1)
    {
        Tmp--;
        if ((Num % Tmp) == 0)
        {
            sum += Tmp;
        }
    }
    if ((sum == Num) && (Num != 0))
    {
        printf("The %u is a Perfect number.\n",Num);
    }
    else
    {
        printf("The %u is not a Perfect number.\n",Num);
    }

}
