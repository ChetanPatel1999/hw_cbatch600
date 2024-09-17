//wap to display smallest value between two values.
#include <stdio.h>
void main()
{
    int a,b,ans;
    printf("enter two value : ");
    scanf("%d%d",&a,&b);
    ans = a < b ? a: b;
    printf("smallest num : %d",ans);
}