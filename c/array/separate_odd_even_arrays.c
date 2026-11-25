#include <stdio.h>

typedef unsigned char u8;
typedef unsigned int u32;

u8 ScanArr(u32 Arr[], u8 count);
void SeparateOddEven(const u32 Arr[],u8 count);

int main(void)
{
    u8 count = 0;
    printf("Input the number of elements to be stored in the array : ");
    if((scanf("%hhu",&count)) != 1)
    {
        printf("Invalid Input\n");
        return 1;
    }
    else if (count == 0)
    {
        printf("Array must have at least one element\n");
        return 1;
    }
    
    u32 Arr[count];
    printf("Input %hhu elements in the array :\n",count);
    if((ScanArr(Arr,count)) != 0)
    {
        printf("Invalid Input\n");
        return 1;
    }
    SeparateOddEven(Arr,count);
    return 0;
}
u8 ScanArr(u32 Arr[], u8 count)
{
    for (u8 i = 0; i < count; i++)
    {
        printf("element - %hhu : ",i);
        if ((scanf("%u",&Arr[i])) != 1)
        {
            return 1;
        }
    }
    return 0;
}
void SeparateOddEven(const u32 Arr[],u8 count)
{
    u8 CountEven = 0;
    u8 CountOdd = 0;
    for (u8 i = 0; i < count; i++)
    {
        if((Arr[i]%2) == 0)
        {
            CountEven++;
        }
    }
    CountOdd = count - CountEven;
    if (CountEven == 0)
    {
        printf("No Even elements found\n");
    }
    else
    {
        printf("The Even elements are :\n");
        for (u8 i = 0; i < count; i++)
        {
            if((Arr[i]%2) == 0)
            {
                printf("%u\t",Arr[i]);
            }
        }
        printf("\n");
    }
    if (CountOdd == 0)
    {
        printf("No Odd elements found\n");
    }
    else
    {
        printf("The Odd elements are :\n");
        for (u8 i = 0; i < count; i++)
        {
            if((Arr[i]%2) != 0)
            {
                printf("%u\t",Arr[i]);
            }
        }
        printf("\n");
    }
}