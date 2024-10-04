// wap to print factorial by using recursion.
#include <stdio.h>
int factorial(int num)
{
   static int i=1,fact=1; 
   fact*=i;//fact=fact*i;//120
   i++;//6
   if(i<=num)
   {
    factorial(num);
   }
   return fact;
}
void main()
{
  int res= factorial(6);
  printf("factorial = %d",res);
}