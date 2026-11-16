#include <stdio.h>

typedef signed s32;

void OddCheck(s32 Num);

int main(void)
{
    s32 Num;
    printf("Enter Number : ");
    if((scanf("%d",&Num)) != 1)
    {
        printf("Invalid Input\n");
        return 1;
    }
    OddCheck(Num);
    return 0;
}
void OddCheck(s32 Num)
{

    if (0 != (Num % 2))
    {
        printf("%d is Odd\n",Num);

    }
    else
    {
        printf("%d is even\n",Num);
    }
}
