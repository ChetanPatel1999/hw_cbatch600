//wap to display factors of given number.
#include<stdio.h>
void main()
{
  int num,i;
  printf("enter a num : ");
  scanf("%d",&num);//12
  for(i=1;i<=num;i++)//7
  {
    if(num%i==0)
    {
      printf("%d ",i);//1 2 3 4  6  12
    }
  }
}