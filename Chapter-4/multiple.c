// Keep taking numbers as input from the user until user enters a number that is a multiple of 7

#include <stdio.h>
int main()
{
  int num;
  do
  {

    printf("enter the number: \n");
    scanf("%d", &num);
    printf("%d \n", num);
  } while (num % 7 != 0);
  printf("thanks");
  return 0;
}
