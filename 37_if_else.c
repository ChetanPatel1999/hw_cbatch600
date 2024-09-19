//wap to chekc given char is vovel or consonat.
#include<stdio.h>
void main()
{
  char ch;
  printf("enter a char : ");
  scanf("%c",&ch);//#
  if(!(ch>='a' && ch<='z'))
  {
    printf("char is not alphbet");
  }
  else if(ch=='a'||  ch=='e'|| ch=='i'|| ch =='o'|| ch=='u')
  {
    printf("char is vovel");
  }
  else
  {
    printf("char is consonant");
  }
}