// dyanamic memory allocation using malloc
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, *temp, i;
    int n;
    printf("enter size of dynamaic array : ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));//20
    temp = ptr;
    printf("enter array element : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr); // 404
        ptr++;            // 420
    }
    ptr = temp;
    printf("array element are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr++; // 420
    }
    ptr = temp;
    free(ptr);
}