// practice ques 51
#include <stdio.h>
#include <string.h>
void salting(char ch[]);
void main()
{
    printf("enter the password : ");
    char pass[100];
    scanf("%s", pass);
    salting(pass);
}
void salting(char ch[])
{
    char newPass[200];
    char salt[] = "123";
    strcpy(newPass, ch);
    strcat(newPass, salt);
    puts(newPass);
}
