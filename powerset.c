#include<stdio.h>
#include<math.h>
int main()
{
    int arr[3]={1,2,3};
    int n=pow(2,3);
    for(int i=0;i<n; i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i &(1<<j))
            printf("{%d}",arr[j]);

        }
        printf("\n");
    }
}
