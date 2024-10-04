//wap to take array element from user and  display array  element.
#include<stdio.h>
void main()
{
  int a[5];
  scanf("%d",&a[0]);
  scanf("%d",&a[1]);
  scanf("%d",&a[2]);
  scanf("%d",&a[3]);
  scanf("%d",&a[4]);
  int i;
  printf("array element are : ");
  for(i=0;i<5;i++)//2
  {
     printf("%d ",a[i]);
  } 
  
}