#include <stdio.h>
void main()
{
    int i, j;
    for (i = 5; i >= 1; i--) // 3
    {
        for (j = 1; j <= i; j++) // 1
        {
          if(j%2==0)
          {
            printf("0 ");
          } 
          else
          {
            printf("1 ");
          }
        }
        printf("\n");
    }
}
// 1 0 1 0 1
// 1 0 1 0
// 1 0 1
// 1 0
// 1