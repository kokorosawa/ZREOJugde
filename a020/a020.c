#include <stdio.h>
#include <string.h>
int main()
{
    //要注意ASCII碼字元數字非實際數字
    //如：ASCII 48號為字元0非數字0
    char a[10] = {0};
    char c[26] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    int n[26] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};
    char e;
    int i, encode, j;
    scanf("%s", a);
    for (i = 0; i < 26; i++)
    {
        if (a[0] == c[i])
        {
            encode = n[i];
            break;
        }
    }
    encode = (encode % 10) * 9 + encode / 10;
    for (i = 1, j = 8; i <= 9; i++, j--)
    {
        encode += (a[i] - 48) * j;
    }
    encode += a[9] - 48;
    if (encode % 10 == 0)
        printf("real\n");
    else
        printf("fake\n");
}