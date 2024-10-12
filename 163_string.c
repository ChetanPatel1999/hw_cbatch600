//strlen() // its return length of string
#include<stdio.h>
#include<string.h>
void main()
{
  char name[50];
  printf("enter a string : ");
  gets(name);//chetan
  printf("length of string = %d",strlen(name));
}