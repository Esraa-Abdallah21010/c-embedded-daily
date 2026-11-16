#include <stdio.h>

typedef unsigned char u8;
typedef unsigned int u32;

u8 DecToBin(u32 Num, u8 Bin[], u8 MaxBits);

int main(void)
{
    u8 Bin[32];
    u8 n = DecToBin(87, Bin, 32);
    for (u8 i = 0; i < n; i++) printf("%u", Bin[i]);
    return 0;
}
u8 DecToBin(u32 Num, u8 Bin[], u8 MaxBits)
{
    u8 count = 0;
    u32 Tmp = Num;  

    do { 
        count++; 
        Tmp >>= 1; 
    } while (Tmp);

    if (count > MaxBits) return 0;

    for (u8 i = 0; i < count; i++)
    {
        Bin[count - 1 - i] = (Num >> i) & 1; 
    }
    return count; 
}
