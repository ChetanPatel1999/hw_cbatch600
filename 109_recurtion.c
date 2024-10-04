// wap to printf 1 to  20 even numbers using recuerion.
#include <stdio.h>
void even()
{
    static int i = 1;
    if (i % 2 == 0)printf("%d ", i);
    i++;
    if (i <= 20)
    {
        even();
    }
}
void main()
{
    even();
}