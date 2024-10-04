// wap to print sum  1 to  10  using recuerion.
#include <stdio.h>
int sum(int s, int e) // s=3 , e=10
{
    static int add = 0;
    add += s; // add=add+s;
    s++;      // 4
    if (s <= e)
    {
        sum(s, e);
    }
    return add;
}
void main()
{
    int res = sum(100, 103);
    printf("sum = %d", res);
}