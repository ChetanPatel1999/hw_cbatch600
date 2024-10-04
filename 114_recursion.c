// wap to print factorial by using recursion.
#include <stdio.h>
int factorial(int num)//1
{
   static int fact=1; 
   fact*=num;//120
   num--;//0
   if(num>0)
   {
    factorial(num);
   }
   return fact;
}
void main()
{
  int res= factorial(5);
  printf("factorial = %d",res);
}