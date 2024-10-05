// wap to take array element from user and  display array  element.
#include <stdio.h>
void main()
{
    int n;
    printf("enter array size : ");
    scanf("%d",&n);
    int a[n];
    printf("enter array elemenet : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("array element are : ");
    for (int i = 0; i < n; i++) // 2
    {
        printf("%d ", a[i]);
    }

     int sum=0;
     for (int i = 0; i < n; i++) // 2
    {
        sum=sum+a[i];
    }
    float av;
    av=sum/(float)n;
    printf("\nsum array element : %d",sum);
    printf("\navrage of array := %.2f",av);
}