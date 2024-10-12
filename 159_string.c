// how to take string from user
#include<stdio.h>
void main()
{
  char name[50];
  printf("enter a string : ");
  scanf("%[^\n]s",name);//we can take sentance from user
  printf("name = %s",name);
}