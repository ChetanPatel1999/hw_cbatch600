// wap to take array element from user and  display array  element.
#include <stdio.h>
void main()
{
    int a[5];
    printf("enter array elemenet : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("array element are : ");
    for (int i = 0; i < 5; i++) // 2
    {
        printf("%d ", a[i]);
    }
}