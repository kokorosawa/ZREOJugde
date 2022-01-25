#include <stdio.h>

int main()
{
    int s[1000] = {0}, index, input;
    while (scanf("%d", &input) != EOF)
    {
        index = 0;
        while (input != 1)
        {
            s[index] = input % 2;
            input /= 2;
            index++;
        }

        s[index] = 1;

        for (int i = index; i >= 0; i--)
        {
            printf("%d", s[i]);
        }
        printf("\n");
    }
    return 0;
}