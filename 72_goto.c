// example of goto statment
#include <stdio.h>
void main()
{
    int i;
    i=1;
    lable:
    printf("hi student \n");
    i++;//6
    if(i<=5)
    {
        goto lable;
    }
    printf("after lable 1\n");
    printf("after lable 2\n");
}