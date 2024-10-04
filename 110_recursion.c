// wap to print sum  1 to  10  using recuerion.
#include <stdio.h>
int sum()
{
    static int i = 1, add = 0;
    add += i;
    i++;//3
    if (i <= 10)
    {
        sum();
    }
    return add;
}
void main()
{
   int res = sum();
   printf("sum = %d",res);

}