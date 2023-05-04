// write a program to find if the character entered by the user is upper case or lower case

#include <stdio.h>

int main()
{
    char a;
    printf("enter the character");
    scanf("%c", &a);
    if (a >= 65 && a <= 90)
    // if (a >= 'A' && a <= 'Z')
    {
        printf("upper case letter baby");
    }
    else if (a >= 97 && a <= 122)
    {
        printf("lower case letter baby");
    }
    else
    {
        printf("galat input de rhe ho tum");
    }
    return 0;
}