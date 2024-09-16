#include<stdio.h>
void main()
{
  int a=12;
  printf("a =%d\n",a);//12
  a++;// post
  printf("a =%d\n",a);//13
  ++a;// pre
  printf("a =%d\n",a);//13
}