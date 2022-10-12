#include<stdio.h>
#include<math.h>
void main(){
   printf("ANUPAM VATS\n");
    int arr[100];
    printf("ENTER THE NUMBER OF ELEMENTS\n");
    int n,k=0;
    scanf("%d",&n);
  for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
  }
  int count=pow(2,n);
    for(int i=0;i<count;i++){
        printf("{ ");
        for(int j=0;j<n;j++){
            if(i & (1<<j))
            printf(" %d ",arr[j]);
        }
            k++;
        printf("}");
     printf("\n");
    }
    printf("total no subset with empty set%d",k);
}