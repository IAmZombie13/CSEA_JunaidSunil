#include <stdio.h>
#include <math.h>

int checkn(int a)
{
    int sum = 0;
    int b;
    for (b = a; b > 0; b /= 10)
    {
        sum = sum + ((b % 10) * (b % 10));
    }

    while (sum > 0)
    {
        b += (sum % 10);
        sum /= 10;
    }

    if (a == b)
        return 1;
    else
        return 0;
}
