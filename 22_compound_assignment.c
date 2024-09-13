#include <stdio.h>
void main()
{
    int a = 12, b = 5;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    // a+=b;
    // b-=a;
    // b = -a;
    // a=+b;
    // a *= b;
    a %= b;
    printf("a = %d\n", a); // 2
    printf("b = %d\n", b); // 5
}