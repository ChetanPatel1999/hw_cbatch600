// dyanamic memory allocation using calloc
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, *temp, i;
    int n;
    printf("enter size of dynamaic array : ");
    scanf("%d", &n);
    ptr = (int *)calloc(n,sizeof(int));
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