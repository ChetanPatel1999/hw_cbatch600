//if we increase pointer value by 1 so pointer value increse
//by 4 if pointer is integer pointer.
#include<stdio.h>
void main()
{
 int a=12;
 int *ptr;
 ptr=&a;
 printf("adress of a : %d\n",&a);//123456
 printf("adress of a by ptr: %d\n",ptr);//123456
 printf("*ptr = %d\n",*ptr);//12
 ptr++; // ptr=ptr+1;
 printf("adress of a : %d\n",&a);//123456
 printf("adress of a by ptr: %d\n",ptr);//123457
 printf("*ptr = %d\n",*ptr);//grabage value 
}