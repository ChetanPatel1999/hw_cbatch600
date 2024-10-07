// wap to take two matrix form user and display their sum.
#include <stdio.h>
void main()
{
    int r, c;
    printf("enter row : ");
    scanf("%d", &r);
    printf("enter columm : ");
    scanf("%d", &c);
    int mat1[r][c], mat2[r][c], matsum[r][c];
    int i, j;
    printf("enter matrix1 element : \n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 0
        {
            printf("enter element matrix[%d][%d] pos : ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("enter matrix2 element : \n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 0
        {
            printf("enter element matrix[%d][%d] pos : ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("%d * %d matrix1 element :  \n", r, c);
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 0
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("%d * %d matrix2 element :  \n", r, c);
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 0
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    //sum  of mat1 and mat2 : 
     for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 0
        {
          matsum[i][j]=mat1[i][j]+mat2[i][j]; 
        }
    }

    printf("%d * %d matrix sum  element :  \n", r, c);
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 0
        {
            printf("%d ", matsum[i][j]);
        }
        printf("\n");
    }
}
