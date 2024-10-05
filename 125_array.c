// wap to take array element from user and  display them in revrese order.
#include <stdio.h>
void reverse(int arr[], int s)
{
    int i;
    printf("\nreverse array element : ");
    for (i = s - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
void display(int arr[], int s)
{
    int i;
    printf("array element are : ");
    for (i = 0; i < s; i++) // 2
    {
        printf("%d ", arr[i]);
    }
}
void arrayinput(int arr[], int s)
{
    int i;
    printf("enter array elemenet : ");
    for (i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void main()
{
    int n, i;
    printf("enter array size : ");
    scanf("%d", &n);
    int a[n];
    arrayinput(a, n);
    display(a, n);
    reverse(a, n);
}
