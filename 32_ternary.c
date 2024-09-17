//wap to display smallest value between three values.
// nested ternary
#include <stdio.h>
void main()
{
    int a,b,c,ans;
    printf("enter two value : ");
    scanf("%d%d%d",&a,&b,&c);//12 5  3
    ans = a < b ?(a<c?a:c):(b<c?b:c);
    printf("smallest num : %d",ans);
}