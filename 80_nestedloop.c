#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 2; i++)//3
    {
        printf("outside loop\n");
        for (j = 1; j <= 5; j++)//6
        {
            printf("hi students \n");//25
        }  
    }


}