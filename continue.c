// printing odd no.s from 5 to 50 using continue statement
#include <stdio.h>
int main()
{
    for (int i = 5; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d \n", i);
    }
    return 0;
}