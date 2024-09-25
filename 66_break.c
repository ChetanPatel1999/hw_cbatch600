//wap to check given number is prasent in table or not.
#include<stdio.h>
void main()
{
 int n,tab,i,s,f=0;
 printf("enter num for table : ");
 scanf("%d",&n);//6
 printf("enter num for search in table : ");
 scanf("%d",&s);//12
 for(i=1;i<=10;i++)
 {
    tab=n*i;
    if(tab==s)
    {
       f=1;
       break;
    }
 }
 if(f==1)
 {
    printf("find number");
 }
 else{
    printf("not find number");
 }
}