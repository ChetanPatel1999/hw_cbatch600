// wap to print even number 1 to 20 .
#include <stdio.h>
void main()
{
    int i,s,e;
    printf("enter start range : ");
    scanf("%d",&s);
    printf("enter ending range :");
    scanf("%d",&e);
    
    for (i = s; i <= e; i++)//4
    {
       if(i%2==0)
       {
         printf("%d ",i);//2 4
       }
    }
}