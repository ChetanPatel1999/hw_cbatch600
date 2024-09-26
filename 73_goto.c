// example of goto statment
#include <stdio.h>
void main()
{
    int i;
    i=1;
    printf("hi student \n");
    i++;//2
    if(i<=5)
    {
        goto lab;
    }
    printf("after lable 1\n");
    lab:
    printf("after lable 2\n");
}