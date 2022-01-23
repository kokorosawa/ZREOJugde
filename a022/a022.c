#include <stdio.h>
#include <string.h>
int foo(char a[], int st, int ed);
int main()
{
    //用遞迴
    char a[1000] = {0};
    gets(a);
    int reslut = foo(a, 0, strlen(a) - 1);
    if (reslut == 1)
        printf("yes\n");
    else
        printf("no\n");
}

int foo(char a[], int st, int ed)
{
    if (ed == 0)
        return 1;
    else if (a[st] != a[ed])
        return 0;
    else
        return foo(a, st + 1, ed - 1);
}