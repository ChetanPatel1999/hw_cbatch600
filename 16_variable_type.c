/*
type of variable :
1. global variable :- global variable not declared inside any fuction its decalared in programm.
                      we access global varible in any fuction .
2. local variable :- local variable decalared inside fuction. and we can access
                     them only inside fuction where its declarid.
*/
#include<stdio.h>

int a=89; //global varible 

void fun()
{
	int b=12,a=67; //loacal variable
	printf("value of a = %d\n",a);//67
	{
	extern int a;
	printf("value of a = %d\n",a);//89
    }
    printf("value of b = %d\n",b);//12
}
void main()
{
  int a=5; // loacal variable
  printf("value of a = %d\n",a);//5
  fun();
}
