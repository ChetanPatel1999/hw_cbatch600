// wap to take two matrix form user and display their sum.
int r, c;
#include <stdio.h>
void inputmatrix(int mat[r][c])
{
    int i, j;
    printf("enter matrix1 element : \n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 0
        {
            printf("enter element matrix[%d][%d] pos : ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}
void display(int mat[r][c])
{
    int i, j;
    printf("%d * %d matrix element :  \n", r, c);
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 0
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
void summatrix(int mat1[r][c], int mat2[r][c], int matsum[r][c])
{
    int i,j;
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 0
        {
            matsum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void main()
{
    printf("enter row : ");
    scanf("%d", &r);//3
    printf("enter columm : ");
    scanf("%d", &c);//3
    int mat1[r][c], mat2[r][c], matsum[r][c], i, j;
    inputmatrix(mat1);
    inputmatrix(mat2);
    summatrix(mat1,mat2,matsum);
    display(mat1);
    display(mat2);
    display(matsum);
}
