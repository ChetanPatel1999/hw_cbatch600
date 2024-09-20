//nested if else example
//wap to check given number is even-positive ,
// even -nagative ,odd-positive , odd-nagative or zero.
#include<stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d",&num);//12
    if(num==0)
    {
      printf("num is Zero");
    }
    else if(num%2==0)
    {
        if(num>0)
        {
            printf("even-positive");
        }
        else{
            printf("even-nagative");
        }
    }
    else
    {
         if(num>0)
        {
            printf("odd-positive");
        }
        else{
            printf("odd-nagative");
        } 
    }

}