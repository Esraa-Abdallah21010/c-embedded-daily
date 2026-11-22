#include <stdio.h>

typedef signed int s32;
typedef unsigned char u8;

u8 ScanArr(s32 Arr[], u8 count);
void PrintArr(const s32 Arr[],u8 count);
u8 UniqueElements(const s32 Arr[],s32 ArrUnique[],u8 count,u8 *countunique);

int main(void)
{
    u8 count = 0;
    printf("Input the number of elements to be stored in the array: ");
    if ((scanf("%hhu",&count)) != 1)
    {
        printf("Invalid Input\n");
        return 1;
    }
    u8 CountUnique = count;
    s32 Arr[count];
    s32 ArrUnique[CountUnique];
    if ((ScanArr(Arr,count)) != 0)
    {
        printf("Invalid Input\n");
        return 1;
    }
    if((UniqueElements(Arr,ArrUnique,count,&CountUnique)) != 0)
    {
        printf("Invalid Input\n");
        return 1;
    }
    printf("The unique elements found in the array are: \n");
    PrintArr(ArrUnique,CountUnique);
    return 0;
}
u8 UniqueElements(const s32 Arr[],s32 ArrUnique[],u8 count,u8 *countunique)
{
    if (countunique == NULL)
    {
        return 1;
    }
    else
    {
        u8 n = 0;
        for (u8 i = 0; i < count; i++)
        {
            u8 Found = 0;
            for (u8 j = 0; j < count; j++)
            {
                if ((Arr[i] == Arr[j]) && (i != j))
                {
                    Found = 1;
                    break;
                }
            }
            if (Found == 0)
            {
                ArrUnique[n] = Arr[i];
                n++;
            }
        }
        *countunique = n;
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
void PrintArr(const s32 Arr[],u8 count)
{
    if(count > 0)
    {
        for (u8 i = 0; i < count; i++)
        {
            printf("%d\t",Arr[i]);
        }
        printf("\n");
    }
    else if(count == 0)
    {
        printf("No Elements Found\n");
    }
}