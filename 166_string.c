// strupr() // its convert string in upper case
#include <stdio.h>
#include <string.h>
void upper(char *name)//400 //Chetan
{
    int i;
    for (i = 0; *name != '\0'; i++)//1
    {
        if (*name >= 'a' && *name <= 'z')
        {
            *name = *name - 32;
        }
        name++;//402
    }
}
void main()
{
    char name[50];
    printf("enter a string : ");
    gets(name);
    printf("name = %s\n", name);
    //strupr(name);//built-in fuction
    upper(name);
    printf("upercase  name = %s\n", name);
}