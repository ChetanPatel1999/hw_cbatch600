//no return type no argument fuction
#include <stdio.h>
void add() 
{
    int a, b, c;
    printf("addition programm :\n");
    printf("enter two number : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum of %d and %d = %d\n", a, b, c);
}
void main()
{
    add();
}
