#include<stdio.h>
void main()
{
 int i=1;
 while(i<=10)
 {
   printf("%d\n",i);//1 
   if(i==5)
   {
    break;
   }
   i++;
 }
}