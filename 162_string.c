//wap to print length of string.
#include<stdio.h>
void main()
{
  char name[50];
  printf("enter a string : ");
  gets(name);//chetan
  int i,l=0;
  for(i=0;name[i]!='\0';i++)
  {
    l++;
  }
  printf("string length : %d",l);
  printf("\nreverse string : ");
  for(i=l-1;i>=0;i--)//for(i=strlen(name)-1;i>=0;i--)
  {
    printf("%c",name[i]);
  }


}