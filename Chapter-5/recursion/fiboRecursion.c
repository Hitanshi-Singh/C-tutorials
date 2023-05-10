// print the nth term of the fibonacci series
#include <stdio.h>

int fibo(int n);
int main()
{
    printf("%d", fibo(6));
    return 0;
}

int fibo(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }
    int f = fibo(n - 1) + fibo(n - 2);
    return f;
}