#include <stdio.h>
#include <stdlib.h>

int check(char ch[])
{
    int i = 0, k = 0;

    while (ch[k] != '\0')
    {
        if (ch[k] == '*')
        {
            i++;
        }
        else if (ch[k] == '#')
        {
            i--;
        }
        else
        {
            printf("Invalid String\n");
            exit(0);
        }

        k++;
    }

    return i;
}

void main()
{
    char ch[100];
    printf("Your String:");
    gets(ch);
    printf("return value:%d\n", check(ch));
}
