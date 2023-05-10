// printing sum avg and product in the main function using a separate function, basically returning multiple values
#include <stdio.h>
void doWork(int a, int b, int *sum, int *avg, int *prod);
int main()
{
    int a = 3, b = 5;
    int sum;
    int avg;
    int prod;
    doWork(a, b, &sum, &avg, &prod);
    printf("a = %d\nb = %d\nsum =  %d\navg = %d\nprod=%d", a, b, sum, avg, prod);
}

void doWork(int a, int b, int *sum, int *avg, int *prod)
{
    *sum = a + b;
    *avg = (a + b) / 2;
    *prod = a * b;
}