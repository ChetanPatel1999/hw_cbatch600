// wap to make a calculater.
#include <stdio.h>
void main()
{
    int num, a, b, ans;
    printf("welcome to my calculater ....\n");
    printf("press 1 for add:  \n");
    printf("press 2 for sub:  \n");
    printf("press 3 for mul:  \n");
    printf("press 4 for div:  \n");
    printf("press number  ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("enter two number : ");
        scanf("%d%d", &a, &b);
        ans = a + b;
        printf("%d + %d = %d\n", a, b, ans);
        break;
    case 2:

        break;
    case 3:

        break;
    case 4:

        break;
    }
}