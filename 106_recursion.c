//recursion:-when a fuction call itself is called recursion.
#include<stdio.h>

void fun()
{
    static int i=1; // its run only one time in program
    printf("hello world institute\n");//3
    i++;//4
    if(i<=5)
    {
        fun();
    }

}
void main()
{
  fun();
}