#include <stdio.h>

typedef signed int s32;
typedef unsigned char u8;

void ReverseArr(s32 Arr[],u8 count);
void PrintArr(s32 Arr[],u8 count);
u8 ScanArr(s32 Arr[],u8 count);


int main (void)
{
    u8 count;
    printf("Input the number of elements to store in the array : ");
    if ((scanf("%hhu",&count)) != 1)
    {
        printf("Invalid Input\n");
        return 1;
    }
    s32 Arr[count];
    printf("Input %d number of elements in the array : \n",count);
    if ((ScanArr(Arr,count)) != 0)
    {
        printf("Invalid Input\n");
        return 1;
    }
    printf("The values store into the array are :\n");
    PrintArr(Arr,count);
    ReverseArr(Arr,count);
    printf("The values store into the array in reverse are :\n");
    PrintArr(Arr,count);

    return 0;
}
void ReverseArr(s32 Arr[],u8 count)
{
    s32 Tmp;
    for (u8 i = 0; i < (count-1); i++)
    {
        {
            count--;
            Tmp = Arr[i];
            Arr[i] = Arr[count];
            Arr[count] = Tmp;
        }
    }

}
void PrintArr(s32 Arr[],u8 count)
{
    for (u8 i = 0; i < count; i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n");
}
u8 ScanArr(s32 Arr[] ,u8 count)
{
    for (u8 i = 0; i < count; i++)
    {
        printf("element - %d : ",i);
        if ((scanf("%d",&Arr[i])) != 1)
        {
            return 1;
        }
    }
    return 0;
}