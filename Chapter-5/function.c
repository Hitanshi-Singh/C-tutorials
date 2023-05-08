// print namaste if user is indian and bonjour if the user is french
#include <stdio.h>
void namaste();
void bonjour();
int main()
{
    printf("enter 'i' for indian and 'f' for french :");
    char ch;
    scanf("%c", &ch);
    if (ch == 'i')
    {
        namaste();
    }
    if (ch == 'f')
    {
        bonjour();
    }
    return 0;
}
void bonjour()
{
    printf("bonjour");
}
void namaste()
{
    printf("namaste");
}
