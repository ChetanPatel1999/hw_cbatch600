#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) // 1
    {
        if (i%2==0)
        {
            continue;
        }
        else
        {
            printf("before break");
            break;
        }
        printf("%d ", i);// 1 2 3 4 6 7 8 9 10
    }
}