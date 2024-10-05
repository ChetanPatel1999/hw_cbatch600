//wap to find max element from array.
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
int maxdisplay(int arr[], int s)//6
{
    // 33, 44, 222, 11, 66, 78
    int i,max=arr[0];//33
    for (i = 0; i < s; i++)//6 
    {
        if(max<arr[i])
        {
            max=arr[i];//222
        }

    }
    return max;
    
}
void main()
{
    int arr1[] = {12, 344, 56};
    int arr2[] = {33, 44, 222, 11, 66, 78};
    int arr3[] = {11, 2, 3, 4, 3, 2, 1};
    display(arr1, 3);
    printf("max value = %d\n",maxdisplay(arr1,3));
    display(arr2, 6);
    printf("max value = %d\n",maxdisplay(arr2,6));
    display(arr3, 7);
    printf("max value = %d\n",maxdisplay(arr3,7));
    
}
