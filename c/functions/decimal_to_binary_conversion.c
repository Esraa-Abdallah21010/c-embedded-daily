#include <stdio.h>

typedef unsigned char u8;
typedef unsigned int u32;

u8 DecToBin(u32 Num, u8 Bin[], u8 MaxBits);

int main(void)
{
    u32 Num = 0;
    u8 Bin[32];
    u8 n;

    printf("Input any decimal number: ");
    if (scanf("%u", &Num) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    n = DecToBin(Num, Bin, sizeof(Bin));
    if (n == 0)
    {
        printf("Conversion failed\n");
        return 1;
    }

    printf("The Binary value is : ");
    for (u8 i = 0; i < n; i++)
    {
        printf("%u", Bin[i]);
    }
    printf("\n");
    return 0;
}

u8 DecToBin(u32 Num, u8 Bin[], u8 MaxBits)
{
    u8 count = 0;
    u32 Tmp = Num;

    if (Bin == NULL)
    {
        return 0;
    }

    do
    {
        count++;
        Tmp >>= 1;
    } while (Tmp);

    if (count > MaxBits)
    {
        return 0;
    }

    for (u8 i = 0; i < count; i++)
    {
        Bin[count - 1 - i] = (Num >> i) & 1;
    }
    return count;
}