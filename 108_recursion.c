//wap to printf 1 to  10 numbers using recuerion.
#include <stdio.h>
void main()
{
    static int i = 1;
    printf("%d\n",i);
    i++;
    if (i <= 10)
    {
        main();
    }
}