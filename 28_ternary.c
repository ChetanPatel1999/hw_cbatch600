//wap to display smallest value between two values.
#include <stdio.h>
void main()
{
    int a,b;
    printf("enter two value : ");
    scanf("%d%d",&a,&b);
    a < b ? printf("smallest value = %d",a) : printf("smallest value = %d",b);
}