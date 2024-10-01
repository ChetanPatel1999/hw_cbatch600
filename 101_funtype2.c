// no return type, but with argument fuction
#include <stdio.h>
void add(int a, int b)
{
    int c;
    c = a + b;
    printf("sum of %d and %d = %d\n", a, b, c);
}
void add2(int a, int b, int c)
{
    int d;
    d = a + b + c;
    printf("sum of %d and %d and %d= %d\n", a, b, c, d);
}
void cube(int num)
{
    int c;
    c = num * num * num;
    printf("cube of %d = %d\n", num, c);
}
void range(int s, int e)
{
    int i;
    for (i = s; i <= e; i++) // 6
    {
        cube(i);
    }
}
void ascii(char ch)
{
    printf("ascii code of %c = %d\n", ch, ch);
}
void factorial(int num)
{
    int fact = 1, i;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d\n", num, fact);
}
void square(float num) // 5
{
    float sqr;
    sqr = num * num;
    printf("square of %.2f = %.2f\n", num, sqr);
}
void main()
{
    square(5.5);
    // int i;
    // int a=5,b=10;
    // range(a,b);
    // printf("____________________________\n");
    // range(15,20);
    // printf("____________________________\n");
    // range(1,3);
    // ascii('A');
    // ascii('B');
    // factorial(5);
    // factorial(6);
}
