// 2 D array example or matrix example
#include <stdio.h>
void display(int mat[3][2])
{
    int i, j;
    printf("3 * 2 matrix element :  \n");
    for (i = 0; i < 3; i++) // 2
    {
        for (j = 0; j < 2; j++) // 0
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
void main()
{
    int mat[3][2] = {{12, 34}, {11, 22}, {15, 16}};
    display(mat);
}