#include <stdio.h>
int fibo(int n);
int main()
{
    fibo(9);
    return 0;
}
int fibo(int n)
{
    int a = 0;
    int b = 1;
    printf("%d, ", a);
    printf("%d, ", b);
    for (int i = 1; i <= n; i++)
    {

        int c = a + b;
        if (i == n)
        {
            printf("%d", c);
            break;
        }
        printf("%d ,", c);
        a = b;
        b = c;
    }
}