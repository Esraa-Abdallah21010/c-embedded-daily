#include <stdio.h>

typedef unsigned char u8;
typedef signed int s32;

u8 ScanArr(s32 Arr[], u8 count);
void PrintArr(const s32 Arr[],u8 count);
void CpyArr(const s32 Arr[],s32 ArrCpy[],u8 count);
u8 CountDuplicate(const s32 Arr[],u8 CountArr);

int main(void)
{
    u8 count = 0;
    printf("Input the number of elements to be stored in the array : ");
    if ((scanf("%hhu",&count)) != 1)
    {
        printf("Invalid Input\n");
        return 1;
    }
    printf("Input %hhu elements in the array : \n",count);
    s32 Arr[count];
    printf("Input %hhu elements in the array :\n",count);
    if ((ScanArr(Arr,count)) != 0)
    {
        printf("Invalid Input\n");
        return 1;
    }
    printf("Total number of duplicate elements found in the array is : %hhu",CountDuplicate(Arr,count));
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
void PrintArr(const s32 Arr[],u8 count)
{
    for (u8 i = 0; i < count; i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n");
    
}
void CpyArr(const s32 Arr[],s32 ArrCpy[],u8 count)
{
    for (u8 i = 0; i < count; i++)
    {
        ArrCpy[i] = Arr[i];
    }
}
u8 CountDuplicate(const s32 Arr[],u8 CountArr)
{
    u8 CountDup = 0;
    for (u8 i = 0; i < (CountArr); i++)
    {
        for (u8 j = (i+1) ; j < CountArr; j++)
        {
            if (Arr[i] == Arr[j])
            {
                CountDup++;
                break;
            }
        }
    }
    
    return CountDup;
}