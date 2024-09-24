// wap to find sum of individula digit of given number.
#include <stdio.h>
void main()
{
    int num, rem, sum = 0;
    printf("enter a num : ");
    scanf("%d", &num);
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("sum of individual digit : %d", sum);
}