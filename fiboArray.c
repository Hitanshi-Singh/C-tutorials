#include <stdio.h>
void main()
{
    printf("enter the value of n");
    int n;
    scanf("%d", &n);
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    printf("%d\t%d\t", fib[0], fib[1]);
    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d\t", fib[i]);
    }
    printf("\n");
}