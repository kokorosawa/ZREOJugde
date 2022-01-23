#include <stdio.h>
int main()
{
    //用一維陣列模擬二維陣列
    int a[1000];
    int num1, num2;
    while (scanf("%d%d", &num1, &num2) != EOF)
    {
        for (int i = 0; i < num1 * num2; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < num2; i++)
        {
            for (int j = 0, n = 0; j < num1; j++, n += num2)
            {
                printf("%d ", a[i + n]);
            }
            printf("\n");
        }
    }
}