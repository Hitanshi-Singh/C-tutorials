// print the value of i from its pointer to pointer

#include <stdio.h>
int main()
{
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d \n", pptr); // prints the value saved in pptr
    printf("%d\n", ptr);   // prints the value saved in ptr
    printf("%d\n", *pptr); // prints the value saved in the adddress saved in pptr i.e., address of i
    printf("%d\n", *ptr);  // prints the value saved in the adddress saved in ptr i.e., 5
    printf("%d\n", &ptr);  // prints the adddress of ptr
    printf("%d\n", &pptr); // prints the address of pptr
}