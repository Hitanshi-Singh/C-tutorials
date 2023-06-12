#include <stdio.h>
void main()
{
    int a = 1, b = 4;
    int c = a++ + b;
    printf("%d\n", c);
    a = 3;
    printf("%d %d %d", a++, a, a++);
}