// strcpy() // copy one string into another string
#include <stdio.h>
#include <string.h>
void main()
{
    char name1[50], name2[50];
    printf("enter frist string : ");
    gets(name1);
    //strcpy(name2,name1);
    strcpy(name2,"hariom");
    printf("name1 = %s\n", name1);
    printf("name2 = %s\n", name2);
    
}