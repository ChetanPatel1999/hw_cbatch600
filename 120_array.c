//wap to print sum of all array elemet.
#include<stdio.h>
void main()
{
  int a[]={12,34,56,78,90};
  int i;
  printf("array element are : ");
  for(i=0;i<5;i++)//2
  {
     printf("%d ",a[i]);
  } 
  //sum of array element
  int sum=0;
  for(i=0;i<5;i++)//5
  {
     sum=sum+a[i];// 270               //sum+=a[i];
  } 
  printf("\nsum of all array element : %d",sum);
}