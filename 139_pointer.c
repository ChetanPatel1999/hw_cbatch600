//we can change variable value using pointer.
#include<stdio.h>
void main()
{
  int a=12;
  int *ptr=&a;
  printf("value of a : %d \n",a);//12
  *ptr=90;
  printf("value of a : %d \n",a);//90
  printf("value of a by ptr : %d \n",*ptr);//90

} 