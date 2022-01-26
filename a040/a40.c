#include <stdio.h>
#include <math.h>
int main()
{
    int st, ed, temp, count = 0, n;
    scanf("%d%d", &st, &ed);
    for (int i = st; i <= ed; i++)
    {
        n = 0;
        int sum = 0;
        temp = i;
        while (temp != 0)
        {
            temp /= 10;
            n++;
        }
        temp = i;
        while (temp != 0)
        {
            sum += pow(temp % 10, n);
            temp /= 10;
        }
        if (sum == i)
        {
            printf("%d ", i);
            count++;
        }
    }
    if (count == 0)
        printf("none\n");
}