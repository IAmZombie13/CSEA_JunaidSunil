#include "neon_no.h"

void main()
{
    int a;
    printf("ENter value:");
    scanf("%d", &a);
    if (checkn(a))
    {
        printf("it is neon no.\n");
    }
    else
    {
        printf("it is not a neon no.\n");
    }
}
