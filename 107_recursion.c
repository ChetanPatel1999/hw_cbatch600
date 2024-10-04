#include <stdio.h>
void main()
{
    static int i = 1;
    printf("hello world institute\n");
    i++;
    if (i <= 5)
    {
        main();
    }
}