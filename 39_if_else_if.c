// wap to check given number is nagative, positive or zero number.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num);//0
    if (num > 0)
    {
        printf("positive");
    }
    else if (num < 0)
    {
        printf("nagative");
    }
    else
    {
        printf("num is zero");
    }
}