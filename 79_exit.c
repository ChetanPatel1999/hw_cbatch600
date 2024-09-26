// wap to to search 7 in given number.
//wap to count 7 in given number.
#include <stdio.h>
#include <stdlib.h>
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
          printf("7 number is find");
          exit(0);
        }
        num = num / 10;
    }
    printf("7 number is not find");
}