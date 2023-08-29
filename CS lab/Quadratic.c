#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c;
    printf("enter the coefficients of the quadratic eqn : \na = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    if (a == 0 || b == 0 || c == 0)
        printf("invalid coeff");
    else
    {
        float x1, x2, D;
        D = (b * b) - (4.0 * a * c);
        if (D > 0)
        {
            x1 = ((-b) - sqrt(D)) / (2.0 * a);
            x2 = ((-b) + sqrt(D)) / (2.0 * a);
            printf("roots are real and distinct\nx1 = %f\nx2 = %f", x1, x2);
        }
        else if (D == 0)
        {
            x1 = (-b) / (2.0 * a);
            printf("Roots are equal\nx1 = x2 = %f", x1);
        }
        else
        {
            float real = (-b) / (2.0 * a);
            float img = sqrt(-D) / (2.0 * a);
            printf("The roots are imaginary\n");
            printf("x1 = %f + i%f\n", real, img);
            printf("x2 = %f - i%f\n", real, img);
        }
    }
}