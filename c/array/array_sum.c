#include <stdio.h>

typedef unsigned char u8;
typedef signed int s32;

s32 SumArr(s32 Arr[], u8 count);
u8 ScanArr(s32 Arr[], u8 count);

int main(void)
{
    u8 count = 0;
    printf("Input the number of elements to be stored in the array :");
    if ((scanf("%hhu",&count)) != 1)
    {
        printf("Invalid Input\n");
        return 1;
    }
    s32 Arr[count];
    printf("Input %hhu elements in the array :\n",count);
    if ((ScanArr(Arr,count)) != 0)
    {
        printf("Invalid Input\n");
        return 1;
    }
    printf("Sum of all elements stored in the array is : %d\n",SumArr(Arr,count));
    
    return 0;
}

u8 ScanArr(s32 Arr[], u8 count)
{
    for (u8 i = 0; i < count; i++)
    {
        printf("element - %hhu : ",i);
        if ((scanf("%d",&Arr[i])) != 1)
        {
            return 1;
        }
    }
    return 0;
}
s32 SumArr(s32 Arr[], u8 count)
{
    s32 sum = 0;
    for (u8 i = 0; i < count; i++)
    {
        sum += Arr[i];
    }
    return sum;
}