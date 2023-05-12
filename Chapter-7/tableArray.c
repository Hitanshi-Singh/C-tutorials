// printing the tables of 2 and 3 using array
#include <stdio.h>
void calcTable(int arr[][10], int r, int c, int n);
void main()
{
    int n;
    int arr[2][10];
    calcTable(arr, 0, 10, 2);
    calcTable(arr, 1, 10, 3);
}
void calcTable(int arr[][10], int r, int c, int n)
{
    for (int i = 0; i < c; i++)
    {
        arr[r][c] = n * (i + 1);
        printf("%d\t", arr[r][c]);
    }
    printf("\n");
}
