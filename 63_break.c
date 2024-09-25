#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) // 5
    {
        printf("%d ", i);
        if (i == 5)
        {
            break;
        }
    }
}