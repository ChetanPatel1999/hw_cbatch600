// strcat() // combine two string
#include <stdio.h>
#include <string.h>
void main()
{
    char name1[50], name2[50];
    printf("enter frist string : ");
    gets(name1);
    printf("enter second string : ");
    gets(name2);
    printf("name1 = %s\n", name1);
    printf("name2 = %s\n", name2);
    strcat(name1,name2);
    printf("combine string  = %s\n", name1);
}