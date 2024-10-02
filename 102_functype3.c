// with return type, with argument
#include <stdio.h>
int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}
int add2(int a, int b,int c)
{
    return a+b+c;
}
void main()
{

    //   int res=add(12,5);
    //   printf("sum = %d",res);
    printf("sum = %d\n", add(12,13));
    printf("sum = %d\n", add2(5,7,10));

}