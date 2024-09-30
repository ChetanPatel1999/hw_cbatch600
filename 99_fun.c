#include<stdio.h>
void fun1()
{
    printf("hi i am fun1\n");
}
void fun2()
{
    fun1();
    printf("hi i am fun2\n");
}
void fun3()
{
    printf("hi i am fun3\n");
    fun2(); 
    printf("end fun3\n"); 
}
void main()
{
  printf("hi i am main fuction\n");
  fun3();
  printf("end main fuction");
}