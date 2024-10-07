// wap to display sum of all matrix element.
#include <stdio.h>
void main()
{
    int r, c;
    printf("enter row : ");
    scanf("%d", &r);
    printf("enter columm : ");
    scanf("%d", &c);
    int mat[r][c];
    int i, j;
    printf("enter matrix element : \n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 0
        {
            printf("enter element matrix[%d][%d] pos : ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("%d * %d matrix element :  \n",r,c);
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 0
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // sum of all matrix element
    int sum=0;
     for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++) 
        {
           sum+=mat[i][j];
        }
     
    }
    float av;
    av=sum/(float)(r*c);
    printf("\nsum of matrix elemet = %d",sum);
    printf("\navrage of matrix elemet = %.2f",av);
}