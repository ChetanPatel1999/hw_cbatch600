#include <stdio.h>
void display(int arr[], int s)
{
    int i;
    printf("array element are : ");
    for (i = 0; i < s; i++) // 2
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void main()
{
    int arr1[] = {12, 344, 56};
    int arr2[] = {33, 44, 22, 11, 66, 78};
    int arr3[] = {1, 2, 3, 4, 3, 2, 1};
    display(arr1,3);
    display(arr2,6);
    display(arr3,7);
}