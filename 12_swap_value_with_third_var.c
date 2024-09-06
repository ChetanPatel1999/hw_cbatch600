//wap to swap two value using third varible.
#include<stdio.h>
void main()
{
   int a,b,c;
   a=12;
   b=5;
   printf("before sawapping : \n");
   printf("a = %d\n",a);//12
   printf("b = %d\n",b);//5
   c=a;//12
   a=b;//5
   b=c;//12
   printf("after sawapping : \n");
   printf("a = %d\n",a);//5
   printf("b = %d\n",b);//12	
}
