#include<stdio.h>
int fact(int num)
{
    if(num==1)
    {
        return 1;
    }
    return num*fact(num-1);
}
void main()
{
    int res=fact(5);
    printf("fact = %d\n",res);
//  int i;
//  for(i=1;i<=5;i++)
//  {
//     printf("factorial of %d= %d\n",i,fact(i));
//  }
}