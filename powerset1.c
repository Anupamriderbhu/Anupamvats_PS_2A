#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100];
    printf("enter the numbers");
    scanf("%d",&n);
    int pow=(2,n);
    for ( int i = 0; i <3 ; i++)
    {
        scanf("%d" ,&arr[i]);
    }
    for(int i=0; i<n; i++)
    {  
        for(int j=0; j<3; j++)
        {
            if(i &(1<<j))
            printf("%d",arr[j]);
        }
        printf("\n");
    }
}