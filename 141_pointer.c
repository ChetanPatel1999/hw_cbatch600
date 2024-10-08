//pointer to array
#include<stdio.h>
void main()
{
 int arr[5]={12,34,56,78,90};
 int i;
 int *ptr=&arr[0];//400
 for(i=0;i<5;i++)//
 {
    printf("%d ",*ptr);//12 34 56
    ptr++;//408
 }
}