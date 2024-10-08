//wap to take array element from user and display them using pointer.
#include<stdio.h>
void main()
{
 int arr[5];
 int *ptr,i;
 ptr=&arr[0];
 printf("enter array element : ");
 for(i=0;i<5;i++)
 {
    scanf("%d",ptr);
    ptr++;//420
 }
 ptr=&arr[0];
 printf("array element are : ");
  for(i=0;i<5;i++)
 {
    printf("%d ",*ptr);
    ptr++;//404
 }
}