// write a program to check if a number is divisible by 2 or not
#include <stdio.h>
#include <math.h>
int main()
{
    printf("enter the number to be checked ");
    int num;
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("number is divisible by 2");
    }
    else
        printf("number isn't divisible by 2");
    return 0;
}