// transpose of matrix
// Anupam vats
// 2100320130038
#include <stdio.h>
int main()
{
    int i, j, m, n, k, a[3][3], b[3][3], c[3][3];
    printf("Enter the elements of matrix A");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Entere the elements of matrix B");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                b[i][j] = a[j][i];
                printf("%d ", b[i][j]);
            }
        }
    }