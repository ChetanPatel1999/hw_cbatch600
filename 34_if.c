#include<stdio.h>
void main()
{
 int num;
 printf("enter a num : ");
 scanf("%d",&num);//2
 if(num==1)
 {
   printf("GOOD MORNING");  
 }
 if(num==2)
 {
    printf("GOOD AFTERNOON");
 }
  if(num==3)
 {
    printf("GOOD EVENING");
 }
 if( num>3 || num==0 || num<0)
 {
    printf("please enter 1 2 3");
 }
}