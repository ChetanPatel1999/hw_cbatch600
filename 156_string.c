// wap to convert string in upper case.
#include <stdio.h>
void main()
{
    char name[] = "chetAn patel";
    int i;
    printf("name = %s\n", name);
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32;
        }
    }
    printf("name in upercase = %s\n", name);
}