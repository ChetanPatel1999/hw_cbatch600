// dyanamic memory allocation using calloc
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, *temp, i;
    ptr = (int *)malloc(5*sizeof(int));
    temp = ptr;
    *ptr=67;
    printf("array element are : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr++; // 404
    }
}