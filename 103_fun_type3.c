// with return type , with argument
#include <stdio.h>
#include <math.h>
float cube(float num)
{
    return num * num * num;
}
int power(int value, int p)
{
    int ans = 1, i;
    for (i = 1; i <= p; i++) // 3
    {
        ans = ans * value; // 64
    }
    return ans;
}

int factorial(int num)
{
    int fact = 1, i;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int ascii(char ch)
{
    return ch;
}
void  main()
{
    // float res = cube(3.1);
    // printf("pow = %.2f", res);
    //printf("factorial = %d", factorial(4));
    printf("%d",ascii('A'));
}