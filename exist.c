// checking if the file exists or not

#include <stdio.h>
void main()
{
    FILE *fptr;
    fptr = fopen("hello.txt", "r");
    if (fptr == NULL)
    {
        printf("file doesn't exist");
    }
    else
    {
        fclose(fptr);
    }
}