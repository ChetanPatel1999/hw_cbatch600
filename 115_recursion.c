#include<stdio.h>
void fun()
{
    static int i=1;
    printf("hello world institute\n");
    i++;
    if(i<=3)
    {
        fun();
    }
    printf("hi students\n");
}
void main()
{
 fun();
}