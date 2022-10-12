// find the largest number
// Anupam vats
// 2100320130038
#include <stdio.h>
int main()
{
    int n, i, max, a[10];
    printf("Enter the size of array");
    scanf("%d", &n);
    printf("Enter the elements of array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (max <a[i])
        {
            max = a[i];
        }
    }
printf("The largest number in array is =%d", max);
}