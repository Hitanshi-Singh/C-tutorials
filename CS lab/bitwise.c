#include <stdio.h>
void main()
{
    int a = 4, b = 5, n = 3, AND, OR, NOT, R, L, XOR;
    AND = a & b;
    OR = a | b;
    NOT = ~a;
    R = a >> n;
    L = a << n;
    XOR = a ^ b;
    printf("%d", AND);
    printf("\t");
    printf("%d", OR);
    printf("\t");
    printf("%d", NOT);
    printf("\t");
    printf("%d", R);
    printf("\t");
    printf("%d", L);
    printf("\t");
    printf("%d", XOR);
}