// Reversing an array
#include <stdio.h>
int main()
{
    printf("enter the array size bro\n");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("enter the array bro\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n / 2; i++)
    {
        int t = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = t;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}