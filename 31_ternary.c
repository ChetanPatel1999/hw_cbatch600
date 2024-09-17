//wap to display smallest value between three values.
#include <stdio.h>
void main()
{
    int a,b,c,ans;
    printf("enter two value : ");
    scanf("%d%d%d",&a,&b,&c);
    ans = a < b ? a: b;
    ans = ans<c ? ans : c ;
    printf("smallest num : %d",ans);
}