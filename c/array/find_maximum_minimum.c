#include <stdio.h>

typedef unsigned char u8;
typedef signed int s32;

u8 FindMaxArr(s32 Arr[],u8 count,s32 *Max);
u8 FindMinArr(s32 Arr[],u8 count,s32 *Min);
u8 ScanArr(s32 Arr[], u8 count);

int main(void)
{
    u8 count = 0;
    s32 Max = 0;
    s32 Min = 0;
    printf("Input the number of elements to be stored in the array : ");
    if((scanf("%hhu",&count)) != 1)
    {
        printf("Invalid Input\n");
        return 1;
    }
    s32 Arr[count];
    printf("Input %hhu elements in the array :\n",count);
    if((ScanArr(Arr,count)) != 0)
    {
        printf("Invalid Input\n");
        return 1;
    }
    if((FindMaxArr(Arr,count,&Max)) == 0)
    {
        printf("Maximum element is : %d\n",Max);
    }
    if((FindMinArr(Arr,count,&Min)) == 0)
    {
        printf("Minimum element is : %d\n",Min);
    }
    return 0;
}
u8 FindMaxArr(s32 Arr[],u8 count,s32 *Max)
{
    if((count == 0) || (Max == NULL))
    {
        printf("No Found elements\n");
        return 1;
    }
    else
    {
        *Max = Arr[0];
        for(u8 i=1; i<count; i++)
        {
            if (*Max<Arr[i])
            {
                *Max = Arr[i];
            }
        }
        return 0;
    }
}
u8 FindMinArr(s32 Arr[],u8 count,s32 *Min)
{
    if ((Min == NULL) || (count == 0))
    {
        printf("No Found elements\n");
        return 1;
    }
    else
    {
        *Min = Arr[0];
        for(u8 i=1; i<count; i++)
        {
            if (*Min>Arr[i])
            {
                *Min = Arr[i];
            }
        }
        return 0;
    }
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