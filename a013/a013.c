#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int roman(char in[]);
int main()
{
    char s1[100], s2[100];
    while (scanf("%s", s1) != EOF)
    {
        if (s1[0] == '#')
            break;
        scanf("%s", s2);
        int sum1 = roman(s1);
        printf("%d\n", sum1);
        int sum2 = roman(s2);
        printf("%d\n", sum2);
        int sum = abs(sum1 - sum2);
        if (sum == 0)
            printf("ZERO\n");
        else
        {
            while (sum != 0)
            {
                if (sum >= 1000)
                {
                    printf("M");
                    sum -= 1000;
                }
                else if (sum >= 900)
                {
                    printf("CM");
                    sum -= 900;
                }
                else if (sum >= 500)
                {
                    printf("D");
                    sum -= 500;
                }
                else if (sum >= 400)
                {
                    printf("CD");
                    sum -= 400;
                }
                else if (sum >= 100)
                {
                    printf("C");
                    sum -= 100;
                }
                else if (sum >= 90)
                {
                    printf("XC");
                    sum -= 90;
                }
                else if (sum >= 50)
                {
                    printf("L");
                    sum -= 50;
                }
                else if (sum >= 40)
                {
                    printf("XL");
                    sum -= 40;
                }
                else if (sum >= 10)
                {
                    printf("X");
                    sum -= 10;
                }
                else if (sum >= 9)
                {
                    printf("IX");
                    sum -= 9;
                }
                else if (sum >= 5)
                {
                    printf("V");
                    sum -= 5;
                }
                else if (sum >= 4)
                {
                    printf("IV");
                    sum -= 4;
                }
                else if (sum >= 1)
                {
                    printf("I");
                    sum -= 1;
                }
            }
            printf("\n");
        }
    }
}

int roman(char a[])
{
    int sum = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == 'C' && a[i + 1] == 'M')
        {
            sum += 900;
            i++;
        }
        else if (a[i] == 'C' && a[i + 1] == 'D')
        {
            sum += 400;
            i++;
        }
        else if (a[i] == 'X' && a[i + 1] == 'C')
        {
            sum += 90;
            i++;
        }
        else if (a[i] == 'X' && a[i + 1] == 'L')
        {
            sum += 40;
            i++;
        }
        else if (a[i] == 'I' && a[i + 1] == 'X')
        {
            sum += 9;
            i++;
        }
        else if (a[i] == 'I' && a[i + 1] == 'V')
        {
            sum += 4;
            i++;
        }
        else if (a[i] == 'I')
        {
            sum += 1;
        }
        else if (a[i] == 'V')
        {
            sum += 5;
        }
        else if (a[i] == 'X')
        {
            sum += 10;
        }
        else if (a[i] == 'L')
        {
            sum += 50;
        }
        else if (a[i] == 'C')
        {
            sum += 100;
        }
        else if (a[i] == 'D')
        {
            sum += 500;
        }
        else if (a[i] == 'M')
        {
            sum += 1000;
        }
    }
    return sum;
}
