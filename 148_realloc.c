// realloc fuction use
#include <stdio.h>
#include <stdlib.h>
void main()
{
  int n;
  printf("enter size of dyanamic array : ");
  scanf("%d", &n); // 5
  int *ptr = (int *)malloc(n * sizeof(int));
  int i,*temp=ptr;
  printf("adresses of dynamic array :");
  for (i = 0; i < n; i++)//n=5
  {
    printf("%d ", ptr);
    ptr++;
  }
  printf("enter increase dynamic array size : ");
  scanf("%d", &n); // 8
  ptr=temp;
  ptr=realloc(ptr,n*sizeof(int));//32
  printf("increase array adresses : ");
  for(i=0;i<n;i++)
  {
    printf("%d ",ptr);
    ptr++;
  }
  ptr=temp;
  free(ptr);
}