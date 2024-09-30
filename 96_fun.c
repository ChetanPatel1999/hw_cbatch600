#include<stdio.h>
void add() // defination
{
    int a,b,c;
    printf("addition programm :\n");
    printf("enter two number : ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum of %d and %d = %d\n",a,b,c);
}
void main()
{
  printf("hi i am main fuction\n");
  add(); // fuction calling
  printf("main fuction end");
}

