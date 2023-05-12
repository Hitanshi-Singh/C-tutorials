// taking input of name and printing its length
#include <stdio.h>
void main()
{
    printf("enter your name: ");
    char name[100];
    fgets(name, 100, stdin);
    int count = 0;
    for (int i = 0; i < name[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d", count - 1);
}