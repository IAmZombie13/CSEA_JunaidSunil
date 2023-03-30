#include <Stdio.h>

/*void swapp(int *p, int *q)
{
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
}*/

void main()
{
    int a = 10, b = 20;

    printf("a=%d\nb=%d\n\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a=%d\nb=%d\n\n", a, b);
}
