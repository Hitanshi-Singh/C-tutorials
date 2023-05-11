// printing array using pointers
#include <stdio.h>
void printArray(int *arr, int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    printArray(arr, 6);
    return 0;
}
void printArray(int *arr, int n)
{
    int *ptr = arr;
    for (int i = 0; i < 6; i++)
    {
        printf("%d \t", arr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d \t", *ptr);
        *ptr++;
    }
}
