// multiplication of matrix
// Anupam vats
// 2100320130038
#include <stdio.h>
int main()
{
    int i, j, k, a[3][3], b[3][3], c[3][3];
    printf("Enter the elements of matrix A");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of matrix B");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Multiplication of two matrix");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
            printf("%d\n", c[i][j]);
        }
        printf("\n");
    }
}