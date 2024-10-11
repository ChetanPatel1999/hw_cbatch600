// wap to print only vovels in given string.
#include <stdio.h>
void main()
{
    char name[] = "my name is chetan patel";
    int i;
    printf("%s\n",name);
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            printf("%c ", name[i]);
        }
    }
}