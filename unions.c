#include <stdio.h>
int main()
{
    int n, m, i, arr1[20], j, k, arr2[20], c[40], r;
    printf("Enter the size of array 1\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\n Enter the size of array 2\n");
    scanf("%d", &m);
    printf("Enter the elements\n");
    for (j = 0; j < m; j++)
    {
        scanf("%d ", &arr2[j]);
    }
    printf("set 1:  ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\nset 2:  ");
    for (j = 0; j < n; j++)
    {
        printf("%d  ", arr2[j]);
        while (j < m)
        {
            c[k] = arr2[j];
            j++;
            k++;
        }
        printf("\nunion: ");
    }
    i = 0;
    j = 0;
    k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] > arr2[j])
        {
            c[k] = arr2[j];
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
        {
            c[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            c[k] = arr1[i];
            k++;
            i++;
            j++;
        }
    }
    while (i < n)
    {
        c[k] = arr1[i];
        i++;
        k++;
    }
    for (r = 0; r < k; r++)
    {
        printf("%d ", c[r]);
    }
    return 0;
}