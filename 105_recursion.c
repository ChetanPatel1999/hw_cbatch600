//recursion:-when a fuction call itself is called recursion.
#include<stdio.h>
int i=1;//global variable
void fun()
{
    printf("hello world institute\n");//5
    i++;//6
    if(i<=5)
    {
        fun();// recursive calling
    }

}
void main()
{
  fun();
}