#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000] = {0};
    gets(s);
    int st = strlen(s) - 1;
    while (s[st] == '0')
    {
        if (s[st] == '0')
        {
            st--;
            //printf("%d", st);
        }
    }

    for (int i = st; i >= 0; i--)
    {
        printf("%c", s[i]);
    }

    if (st == -1)
        printf("0");
}