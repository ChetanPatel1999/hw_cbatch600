// string example
//by using null charcter we can iterate string
#include <stdio.h>
void main()
{
    char name[] = "my name is chetan patel";
    int i;
    for (i = 0; name[i] != '\0'; i++) 
    {
        printf("%c ", name[i]); 
    }
}