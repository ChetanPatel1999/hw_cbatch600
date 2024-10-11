// wap to print only digit in given string.
#include <stdio.h>
void main()
{
    char name[] = "123chetan8085patel@gmail.com";
    int i;
    printf("%s\n",name);
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i]>='0' && name[i]<='9')
        {
            printf("%c ", name[i]);
        }
    }
}