#include <stdio.h>
void main()
{
    int s, e;
    printf("enter start : ");
    scanf("%d", &s); // 3
    printf("enter end  : ");
    scanf("%d", &e); // 78
    if (s > e)
    {
        printf("plese enter start range smaller than ending range");
    }
    else
    {
        printf("even number between %d to %d : ", s, e);
        while (s <= e)
        {
            if (s % 2 == 0)
            {
                printf("%d ", s); // 20 22 24 26
            }
            s++; // 22
        }
    }
}