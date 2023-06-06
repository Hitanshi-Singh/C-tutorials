// program to check if the number is odd or even using bitwise operator
#include <stdio.h>
void main()
{
    printf("enter the number to be checked : ");
    int num;
    scanf("%d", &num);
    (num & 1 == 1) ? printf("odd") : printf("even");
}