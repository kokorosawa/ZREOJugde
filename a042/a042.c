#include <stdio.h>
int foo(int a);
int main()
{
    int input;
    while (scanf("%d", &input) != EOF)
    {
        printf("%d\n", foo(input));
    }
}

int foo(int a)
{
    if (a == 1)
        return 2;
    else
        return foo(a - 1) + (a - 1) * 2;
}