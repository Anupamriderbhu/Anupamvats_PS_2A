#include<stdio.h>
int main(){
    int a[50],b[50],c[50],i,j,s1,s2,n;
    printf("enter how many elementsin set 1\n");
    scanf("%d", &s1);
    printf("enter how many elements in set 2\n");
    scanf("%d", &s2);
    printf("enter elements of set 1\n");
    for(i=0; i<s1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter elements of set 2\n");
    for(i=0; i<s2; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("Cartesian product= ");
    printf("{");
    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {
            printf("(%d,%d)",a[i],b[j]);
            printf(",");
        }
    }
    printf("}");
}