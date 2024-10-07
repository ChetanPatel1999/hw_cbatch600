// 2 D array example or matrix example
#include <stdio.h>
void main()
{
    int mat[3][3] = {{12, 34, 56}, {11, 22, 33}, {15, 16, 17}};
    int i, j;
    printf("size of mat : %d\n",sizeof(mat));
    printf("3 * 3 matrix element :  \n");
    for (i = 0; i < 3; i++) // 2
    {
        for (j = 0; j < 3; j++) // 0
        {
            printf("%f ", mat[i][j]);
        }
        printf("\n");
    }
}