//wap to calculate simple interest.
#include<stdio.h>
void main()
{
  float principle,rate,time,si,totalamount;
  printf("enter principle ammount : ");
  scanf("%f",&principle);
  printf("enter rate : ");
  scanf("%f",&rate);
  printf("enter time : ");
  scanf("%f",&time);
  si=(principle*rate*time)/100;
  totalamount=si+principle;
  printf("simple interest : %.2f\n",si);
  printf("total ammount : %.2f",totalamount);
  	
}
