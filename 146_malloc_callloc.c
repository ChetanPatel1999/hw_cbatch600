// dyanamic memory allocation using calloc
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, *temp, i;
    ptr = (int *)calloc(5, sizeof(int));
    temp = ptr;
    *ptr = 34;
    ptr++;
    *ptr = 12;
    ptr = temp;
    printf("array element are : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr++; // 404
    }
}