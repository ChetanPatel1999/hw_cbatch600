// wap to print 1 to 100 even number using goto statment.
#include <stdio.h>
void main()
{
    int i;
    i=1;
    lable:
    if(i%2==0)
    {
        printf("%d  ",i);
    }
    i++;
    if(i<=100)
    {
        goto lable;
    }   
}