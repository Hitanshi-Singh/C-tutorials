#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main()
{
    char c;
    printf("enter the character : ");
    scanf("%c", &c);
    c = toupper(c);
    switch (c)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("vowel hai");
        break;

    default:
        printf("not");
        break;
    }
}