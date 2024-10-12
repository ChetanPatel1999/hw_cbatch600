// how to take string from user
//fgets()// its take string from user
//fputs() // its disply string on consol
#include<stdio.h>
void main()
{
  char name[5];
  printf("enter a string : ");
  fgets(name,5,stdin);
  fputs(name,stdout);
  //printf("name = %s",name);
}