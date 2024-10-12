//strrev() // its reverse given string 
#include<stdio.h>
#include<string.h>
void main()
{
  char name[50];
  printf("enter a string : ");
  gets(name);
  printf("name = %s\n",name);
  strrev(name);
  printf("reverse name = %s\n",name);
}