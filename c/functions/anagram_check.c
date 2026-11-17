#include <stdio.h>

typedef unsigned char u8;

u8 CountStr(char Str[]);
void Anagram(char StrOne[],char StrTwo[],u8 count);

int main(void)
{
    char StrOne[20];
    char StrTwo[20];
    u8 CountStrOne = 0;
    u8 CountStrTwo = 0;
    printf("Input the first String : ");
    if((scanf("%19s",StrOne)) != 1)
    {
        printf("Invalid Input\n");
        return 1;
    }
    printf("Input the second String : ");
    if((scanf("%19s",StrTwo)) != 1)
    {
        printf("Invalid Input\n");
        return 1;
    } 
    CountStrOne = CountStr(StrOne);
    CountStrTwo = CountStr(StrTwo);
    if (CountStrOne != CountStrTwo)
    {
        printf("Invalid Input\n");
        return 1;
    }
    Anagram(StrOne,StrTwo,CountStrOne);
    return 0;
}
u8 CountStr(char Str[])
{
    u8 Count = 0;
    while(Str[Count] != '\0')
    {
        Count++;
    }
    return Count;
}
void Anagram(char StrOne[],char StrTwo[],u8 count)
{
    u8 EndFunc = 0;
    char Tmp[count];
    for (u8 j=0; j<count; j++)
    {
        Tmp[j]=StrTwo[j];
    }
    for(u8 i =0; i<count; i++)
    {
        if (EndFunc == 0)
        {
            for(u8 x=0; x<count; x++)
            {
                if (StrOne[i] == Tmp[x])
                {
                    Tmp[x] = ' ';
                    if (count == (i+1))
                    {
                        printf("%s and %s are Anagram\n",StrOne,StrTwo);
                    }
                    break;
                }
                else if (count == (x+1))
                {
                    printf("%s and %s are not Anagram\n",StrOne,StrTwo);
                    EndFunc =1;
                }
            }
        }

    }
}
