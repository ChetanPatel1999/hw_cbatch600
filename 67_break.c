// wap to to search 7 in given number.
//wap to count 7 in given number.
#include <stdio.h>
void main()
{
    int num, rem,f=0;
    printf("enter a num : ");
    scanf("%d", &num);//456897
    while (num > 0)
    {
        rem = num % 10;
        if(rem==7)
        {
           f=1;
           break;
        }
        num = num / 10;
    }
    if(f==1)
    {
        printf("7 find in given number");
    }
    else
    {
       printf("7 is not find in given number");
    }
}