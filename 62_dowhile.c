#include <stdio.h>
void main()
{
    int num, a, b, ans;
    do
    {
        printf("welcome to my calculater ....\n");
        printf("press 1 for add:  \n");
        printf("press 2 for sub:  \n");
        printf("press 3 for mul:  \n");
        printf("press 4 for div:  \n");
        printf("press 5 for exit:  \n");
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
            printf("enter two number : ");
            scanf("%d%d", &a, &b);
            ans = a - b;
            printf("%d - %d = %d\n", a, b, ans);
            break;

        case 3:
            printf("enter two number : ");
            scanf("%d%d", &a, &b);
            ans = a * b;
            printf("%d * %d = %d\n", a, b, ans);
            break;
        case 4:
            printf("enter two number : ");
            scanf("%d%d", &a, &b);
            ans = a / b;
            printf("%d / %d = %d\n", a, b, ans);
            break;
        case 5:break;    
        }
    } 
    while (num!=5);//5
}