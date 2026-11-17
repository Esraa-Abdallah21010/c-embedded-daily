#include <stdio.h>

typedef unsigned int u32;
typedef signed int s32;
typedef unsigned char u8;
typedef signed char s8;

s32 LargElement(s32 Arr[],u8 count);
u8 ScanfArr(s32 Arr[],u8 count);

int main (void)
{
    u8 count =0;
    s32 Arr[32];
    printf("Input the number of elements to be stored in the array (from 1 to 32) :");
    if (((scanf("%hhu",&count)) != 1) || (count <1) || (count>32))
    {
        printf("Invalid Input\n");
        return 1;
    }

    if ((ScanfArr(Arr,count)) == 1)
    {
        printf("Invalid Input\n");
        return 1;
    }
    printf("The largest element in the array is : %d\n",LargElement(Arr,count));
    return 0;
}
s32 LargElement(s32 Arr[],u8 count)
{
    s32 Num = Arr[0];
    for (u8 i=0; i<count;i++)
    {
        if (Arr[i]> Num)
        {
            Num = Arr[i];
        }
    }
    return Num;
}
u8 ScanfArr(s32 Arr[],u8 count)
{
    u8 ErrorState = 0;
    printf ("Input %hhu elements in the array : \n",count);

    for (u8 i=0; i<count;i++)
    {
        printf("element - %d : ",i);

        if((scanf("%d",&Arr[i])) != 1)
        {
            ErrorState = 1;
            break;
        }
    }
    return ErrorState;
}
