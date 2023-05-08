// return sum of two numbers entered by the user
#include <stdio.h>
int findSum(int a, int b);
int main()
{
    int a, b;
    printf("enter the first number : ");
    scanf("%d", &a);
    printf("enter the second number : ");
    scanf("%d", &b);
    printf("The sum is : %d", findSum(a, b)); // actual parameter
    return 0;
}
int findSum(int a, int b) // formal parameter
{
    return a + b;
}