#include <stdio.h>

typedef unsigned int u32;
typedef unsigned char u8;

void PerfectRange(u32 MinNum,u32 MaxNum);

int main (void)
{
    u32 MaxNum =0;
    u32 MinNum =0;
    printf("Input lowest search limit of perfect numbers : ");
    if ((scanf("%u",&MinNum)) != 1)
    {
        printf("Invalid Input\n");
        return 1;
    }
    printf("Input highest search limit of perfect numbers : ");
    if (((scanf("%u",&MaxNum)) != 1) || (MaxNum <= MinNum))
    {
        printf("Invalid Input\n");
        return 1;
    }

    printf("The perfect numbers between %u to %u are :\n",MinNum,MaxNum);
    PerfectRange(MinNum,MaxNum);

    return 0;
}
void PerfectRange(u32 MinNum,u32 MaxNum)
{
    u32 Num = MinNum;
    while (Num <= MaxNum)
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
        if ((sum == Num) &&(0 != sum))
        {
            printf("%u\t",Num);
        }
        Num++;
    }
}
