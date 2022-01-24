#include <stdio.h>
int main()
{
    //輾轉相除法
    int num1, num2, temp;
    scanf("%d%d", &num1, &num2);
    if (num1 < num2)
    {
        temp = num2;
        num2 = num1;
        num1 = temp;
    }
    while (num2 > 0)
    {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }
    printf("%d", num1);
}