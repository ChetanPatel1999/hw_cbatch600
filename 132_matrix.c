// 2 D array example or matrix example
#include <stdio.h>
void main()
{
    int mat[3][3];
    int i, j;
    printf("enter matrix element : \n");
    for (i = 0; i < 3; i++) // 2
    {
        for (j = 0; j < 3; j++) // 0
        {
            printf("enter element matrix[%d][%d] pos : ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }

    printf("3 * 3 matrix element :  \n");
    for (i = 0; i < 3; i++) // 2
    {
        for (j = 0; j < 3; j++) // 0
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}