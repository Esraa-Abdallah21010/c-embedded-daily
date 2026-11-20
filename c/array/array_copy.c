#include <stdio.h>

typedef unsigned char u8;
typedef signed int s32;

void CpyArr(const s32 Arr[],s32 ArrCpy[],u8 count);
u8 ScanArr(s32 Arr[], u8 count);
void PrintArr(const s32 Arr[],u8 count);

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
    s32 ArrCpy[count];
    if ((ScanArr(Arr,count)) != 0)
    {
        printf("Invalid Input\n");
        return 1;
    }
    printf("The elements stored in the first array are :\n");
    PrintArr(Arr,count);
    CpyArr(Arr,ArrCpy,count);
    printf("The elements copied into the second array are :\n");
    PrintArr(ArrCpy,count);
    return 0;
}

void CpyArr(const s32 Arr[],s32 ArrCpy[],u8 count)
{
    for (u8 i = 0; i < count; i++)
    {
        ArrCpy[i] = Arr[i];
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