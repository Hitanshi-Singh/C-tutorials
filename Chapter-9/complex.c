// create a structure to store complex number (use arrow operator)

#include <stdio.h>
struct complex
{
    int real;
    int img;
};

void main()
{
    struct complex num;
    struct complex *ptr;
    ptr = &num;
    printf("enter the complex number\n");

    printf("enter the real part : ");
    scanf("%d", &ptr->real); // use ampersent . without that it won't work

    printf("enter the imaginary part : ");
    scanf("%d", &ptr->img);

    printf(" the complex number is : %d + %di", ptr->real, ptr->img);
}