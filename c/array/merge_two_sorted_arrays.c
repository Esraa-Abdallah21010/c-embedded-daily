#include <stdio.h>

typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

u8 ScanArr(s32 Arr[], u8 count);
void PrintArr(const s32 Arr[],u32 count);
void SortDescending(s32 ArrOne[],s32 ArrTwo[],u8 CountOne,u8 CountTwo);

int main(void)
{
    u8 CountOne = 0;
    u8 CountTwo = 0;
    printf("Input the number of elements to be stored in the first array : ");
    if((scanf("%hhu",&CountOne)) != 1)
    {
        printf("Invalid Input\n");
        return 1;
    }
    s32 ArrOne[CountOne];
    printf("Input %hhu elements in the array : \n",CountOne);
    if((ScanArr(ArrOne,CountOne)) != 0)
    {
        printf("Invalid Input\n");
        return 1;
    }
    printf("Input the number of elements to be stored in the second array : ");
    if((scanf("%hhu",&CountTwo)) != 1)
    {
        printf("Invalid Input\n");
        return 1;
    }
    s32 ArrTwo[CountTwo];
    printf("Input %hhu elements in the array : \n",CountTwo);
    if((ScanArr(ArrTwo,CountTwo)) != 0)
    {
        printf("Invalid Input\n");
        return 1;
    }
    printf("The merged array in decending order is : \n");
    SortDescending(ArrOne,ArrTwo,CountOne,CountTwo);
    return 0;
}
void SortDescending(s32 ArrOne[],s32 ArrTwo[],u8 CountOne,u8 CountTwo)
{
    u32 MergeCount = CountOne + CountTwo;
    s32 MergeArr[MergeCount];
    s32 Temp = 0;
    for (u8 j = 0; j < CountOne; j++)
    {
        MergeArr[j] = ArrOne[j];
    }
    for (u8 i = 0; i < CountTwo; i++)
    {
        MergeArr[CountOne+i] = ArrTwo[i];
    }
    for (u32 x = 0; x < (MergeCount-1); x++)
    {
        for (u32 y = x+1; y < MergeCount; y++)
        {
            if(MergeArr[x] < MergeArr[y])
            {
                Temp = MergeArr[x];
                MergeArr[x] = MergeArr[y];
                MergeArr[y] = Temp;
            }
        }
    }
    PrintArr(MergeArr,MergeCount);
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
void PrintArr(const s32 Arr[],u32 count)
{
    for (u32 i = 0; i < count; i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n");
    
}