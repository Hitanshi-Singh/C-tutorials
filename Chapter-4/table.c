// write a program to print the table of the number entered by the user

#include <stdio.h>

int main()
{
    int num;
    printf("enter the number: \n");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", num * i);
    }
    return 0;
}