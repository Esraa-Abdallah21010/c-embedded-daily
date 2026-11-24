#include <stdio.h>

typedef unsigned char u8;
typedef signed int s32;

u8 ScanArr(s32 Arr[], u8 count);
void FrequArr(const s32 Arr[],u8 count);

int main(void)
{
    u8 count = 0;
    printf("Input the number of elements to be stored in the array : ");
    if((scanf("%hhu",&count)) != 1)
    {
        printf("Invalid Input\n");
        return 1;
    }
    s32 Arr[count];
    printf("Input %hhu elements in the array :\n",count);
    if ((ScanArr(Arr,count)) !=0)
    {
        printf("Invalid Input\n");
        return 1;
    }
    printf("The frequency of all elements of an array :\n");
    FrequArr(Arr,count);
    
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

void FrequArr(const s32 Arr[],u8 count)
{
    u8 Freq = 1;
    u8 Found = 0;
    for (u8 i = 0; i < count; i++)
    {
        Freq = 1;
        Found = 0;
        for(u8 x = 0; x < i; x++)
        {
            if(Arr[x] == Arr[i])
            {
                Found = 1;
                break;
            }
        }
        if(Found ==  0)
        {
            for (u8 j = i+1; j < count; j++)
            {
                if(Arr[i] == Arr[j]) 
                {
                        Freq++;
                }
            }
            printf("%d occurs %hhu times\n",Arr[i],Freq);
        }
    }

}
