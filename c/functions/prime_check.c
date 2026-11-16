#include <stdio.h>

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned int u32;
typedef signed int s32;

int main (void)
{
    u32 Num =0;
    printf("Enter Number : ");
    if ((scanf("%u",&Num)) !=1)
    {
        printf("Invalid Input");
        return 1;
    }
    if (Num<2)
    {
        printf("The number %u is Not a prime number. ",Num);
    }
    else if (Num == 2)
    {
                printf("The number %u is a prime number.",Num);
    }
    else
    {
        for (u32 i=2; i<Num;i++)
        {
            if (((Num%i)== 0 ))
            {
                printf("The number %u is Not a prime number. ",Num);
                break;
            }
            else if (i == (Num-1))
            {
                printf("The number %u is a prime number. ",Num);
    
            }   
        }
    }
    return 0;
}

