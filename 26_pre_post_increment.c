#include<stdio.h>
void main()
{
  int a=12,b;
  //b=++a;// preincreamnet : frist value increase of a by one than assign in b
  b=a++;//post increament :- frist assign value in b than increase a value by one
  printf("a = %d\n",a);//13
  printf("b = %d\n",b);//12
}