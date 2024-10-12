// strrev() // its reverse given string
#include <stdio.h>
#include <string.h>
void copy(char s[], char ch[])
{
  int i;
  for (i = 0; i < strlen(s); i++)
  {
    s[i] = ch[i]; // natehc
  }
}
int length(char s[])
{
  int i, l = 0;
  for (i = 0; s[i] != '\0'; i++)
  {
    l++;
  }
  return l;
}
void reverse(char s[]) // chetan
{
  int i, j = 0;
  char ch[50];
  for (i = length(s) - 1; i >= 0; i--) // 4
  {
    ch[j] = s[i];
    j++; // 6
  }
  ch[j] = '\0';
  copy(s, ch);
}
void main()
{
  char name[50];
  printf("enter a string : ");
  gets(name);
  printf("name = %s\n", name);
  reverse(name);
  printf("reverse name = %s\n", name);
}