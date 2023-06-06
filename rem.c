// remainder operator doesnot work on float data type
#include <stdio.h>
void main()
{
    float a = 3, b = 5, c;
    c = (int)a % (int)b;
    printf("%f", c);
}