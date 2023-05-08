#include <stdio.h>
int fact(int n);

int main()
{
    int n;
    printf("enter the number of which you want the factorial: ");
    scanf("%d", &n);
    printf("%d", fact(n));
    return 0;
}
int fact(int n)
{
    if (n == 1)
        return 1;
    int f = fact(n - 1) * n;
    return f;
}