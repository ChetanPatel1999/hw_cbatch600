// strcmp() // compare two string
#include <stdio.h>
#include <string.h>
void main()
{
    char name1[50], name2[50];
    printf("enter frist string : ");
    gets(name1);
    printf("enter second string : ");
    gets(name2);
    if(strcmp(name1,name2)==0)
    {
      printf("string are same");
    }
    else{
      printf("string are different");
    }
    
}