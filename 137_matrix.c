// 2 D array example or matrix example
int r, c;
#include <stdio.h>
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
void inputarray(int mat[r][c])
{
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
}
void main()
{
    printf("enter row : ");
    scanf("%d", &r);
    printf("enter columm : ");
    scanf("%d", &c);
    int mat[r][c];
    inputarray(mat);
    display(mat);

    // left digonal
    int i;
    if (r==c)
    {
        printf("\nleft digonal of matrix : ");
        for (i = 0; i < r; i++) // 2
        {
            printf("%d ", mat[i][i]);
        }
    }
    else{
        printf("your matrix is not square matrix");
    }
}