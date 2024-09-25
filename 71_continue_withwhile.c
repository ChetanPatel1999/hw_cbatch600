#include<stdio.h>
void main()
{
 int i=1;
 while(i<=10)
 {
    i++;
    printf("%d\n",i);
    if(i%2==0)
    {
        continue;
    }  
 }
}