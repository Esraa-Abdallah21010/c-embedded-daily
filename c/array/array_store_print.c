#include <stdio.h>

typedef signed int s32;
typedef unsigned char u8;

int main (void)
{
    s32 Arr[10];
    printf("Input 10 elements in the array :\n");
    for(u8 i = 0; i < 10; i++)
    {
        printf("element - %d : ",i);
        if((scanf("%d",&Arr[i])) != 1)
        {
            printf("Invalid Input\n");
            return 1;
        }
    }
    printf("Elements in array are:");
    for (u8 i = 0; i < 10; i++)
    {
        printf(" %d",Arr[i]);
    }
    
    return 0;
}



