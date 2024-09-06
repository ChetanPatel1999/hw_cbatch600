//wap to swap two value without using third varible.
#include<stdio.h>
void main()
{
   int a,b;
   a=12;
   b=5;
   printf("before sawapping : \n");
   printf("a = %d\n",a);//12
   printf("b = %d\n",b);//5
   a=a+b;
   b=a-b;
   a=a-b;
   printf("after sawapping : \n");
   printf("a = %d\n",a);//5
   printf("b = %d\n",b);//12	
}
