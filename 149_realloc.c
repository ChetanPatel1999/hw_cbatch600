// realloc fuction use
#include <stdio.h>
#include <stdlib.h>
void main()
{
  int n,n1;
  printf("enter size of dyanamic array : ");
  scanf("%d", &n); // 5
  int *ptr = (int *)malloc(n * sizeof(int));
  int i,*temp=ptr;
  printf("enter array element :");
  for (i = 0; i < n; i++)//n=5
  {
    scanf("%d",ptr);
    ptr++;
  }
  ptr=temp;
  printf("display array element :");
  for (i = 0; i < n; i++)//n=5
  {
    printf("%d ",*ptr);
    ptr++;
  }
  printf("\nenter increase dynamic array size : ");
  scanf("%d", &n1); //8
  ptr=temp;
  ptr=realloc(ptr,n1*sizeof(int));//400
  n1=n1-n;
  ptr=ptr+n;//420 ptr+5
  printf("enter more elemet  : ");
  for(i=0;i<n1;i++)
  {
    scanf("%d",ptr);//420
    ptr++;//432
  }

  ptr=temp;//400
  printf("display array element :");
  for (i = 0; i < (n1+n); i++)//n=5
  {
    printf("%d ",*ptr);
    ptr++;
  }
  ptr=temp;//400
  free(ptr);
  // ptr // dangling pointer
}