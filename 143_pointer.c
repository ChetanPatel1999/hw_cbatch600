// wap to take array element from user and display them using pointer in reverse order.
#include <stdio.h>
void main()
{
    int arr[5];
    int *ptr, i;
    ptr = &arr[0]; // 400
    printf("enter array element : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr);
        ptr++; // 420
    }
    ptr--; // 416
    printf("array element in revesrse order: ");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d ", *ptr); // 90 78 56 34 12
        ptr--;               // 396
    }
}