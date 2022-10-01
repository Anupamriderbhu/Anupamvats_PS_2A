#include <stdio.h>
int main()
{
    int i = 0, j = 0, k = 0, a[100], b[100], c[100], m, n, p = 0;
    printf("enter the numbers of elements of set1:");
    scanf("%d", &m);
    printf("enter the numbers of elements of set2:");
    scanf("%d", &n);
    printf("enter the elements of set1:");
    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);
    printf("enter the elements of set2:");
    for (j = 0; j < n; j++)
            scanf("%d", &b[j]);
    for (i = 0; i < m; i++)
    {
        k = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i] != b[j])

            {
                k += 1;
            }
            else
            {
                break;
            }
        }
        if (k == n)
        {
            c[p] = a[i];
            p += 1;
        }
    }
        printf("difference of set A and B=\n");
        for (int i = 0; i < p; i++)
        {
            printf("%d ", c[i]);
        }
}    
