#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char ch[100];

    printf("Enter your ID:");
    gets(ch);
    int i;
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == '0')
        {
            ch[i] = '&';
        }
    }

    i--;
    char temp;
    int j = 0;
    while (j < i)
    {
        temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
        i--;
        j++;
    }

    printf("The new ID is:%s", ch);
}
