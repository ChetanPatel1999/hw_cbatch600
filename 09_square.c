//wap to print square and cube of given number.
#include<stdio.h>
void main()
{
	int num,sqr ,cube;
	printf("enter a number : ");
	scanf("%d",&num);//5
	sqr=num*num;
	cube=num*num*num;
	printf("square of %d = %d\n",num,sqr);
	printf("cube of %d = %d",num,cube);
}
