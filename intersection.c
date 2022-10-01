#include<stdio.h>
int main()
{
     int n,i,m,arr1[20],j,k,arr2[20],c[40],r;
     printf("Enter the size of arr1\n");
     scanf("%d",&n);
     printf("Enter the elements\n");
     for(i=0;i<n;i++)
     {
      scanf("%d",&arr1[i]);
     }
     printf("\nEnter the size of arry2\n");
     scanf("%d",&m);
     printf("Enter the elements\n");
     for(j=0;j<m;j++)
     {
        scanf("%d",&arr2[j]);
     }
     k=0;
     for(i=0;i<n;i++)
     {
      for(j=0;j<m;j++)
       {
         if(arr1[i]==arr2[j])
       {
       c[k]=arr2[j];
       k++;
       }
       }
       }
        printf("intersection\n");
       for(r=0;r<k;r++)
       {
        printf("%d ",c[r]);
       }

}