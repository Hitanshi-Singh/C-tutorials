#include <stdio.h>
#include <math.h>
float fact(int f);
void main()
{
    int n;
    printf("The n : ");
    scanf("%d", &n);
    printf("enter the angle in degrees : ");
    float x;

    scanf("%f,", &x);
    x = 3.14 / 180;
    int i;
    int p = 1;
    int f = 1;
    float sum = 0;
    float sign = 1;
    for (i = 1; i <= n; i++)
    {
        sum = sum + (pow(x, p) / fact(f)) * sign;
        p = p + 2;
        f = f + 2;
        sign = sign * -1;
    }
    printf("the sin calculated : %f", sum);
    printf("sine of x using built-in function %f", sin(x));
}
float fact(int f)
{
    int i, fact = 1;
    for (i = 1; i <= f; i++)
    {
        fact = fact * i;
    }
    return fact;
}