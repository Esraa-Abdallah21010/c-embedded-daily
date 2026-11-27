#include <stdio.h>

typedef unsigned char u8;
typedef signed int s32;

void SortArrDesc(s32 Arr[],u8 count);
u8 ScanArr(s32 Arr[], u8 count);
void PrintArr(const s32 Arr[],u8 count);

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
    
    s32 Arr[count];
    printf("Input %hhu elements in the array :\n",count);
    if((ScanArr(Arr,count)) != 0)
    {
        printf("Invalid Input\n");
        return 1;
    }
    SortArrDesc(Arr,count);
    PrintArr(Arr,count);
    
    return 0;
}
void SortArrDesc(s32 Arr[],u8 count)
{
    s32 temp;
    for(u8 i = 0; i < (count-1); i++)
    {
        for (u8 j = (i+1); j <  count; j++  )
        {
            if (Arr[i] < Arr[j])
            {
                temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = temp;
            }
        }
        
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
void PrintArr(const s32 Arr[],u8 count)
{
    for (u8 i = 0; i < count; i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n");
    
}