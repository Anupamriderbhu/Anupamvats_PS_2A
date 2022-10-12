//calculate average marks of students
//Anupam vats
//2100320130038
#include<stdio.h>
int main()
{
    int average,a,b,c,d,e;
    printf("enter the marks of firsts subject: ");
    scanf("%d",&a);
    printf("enter the marks of second subject: ");
    scanf("%d",&b);
    printf("enter the marks of third subject: ");
    scanf("%d",&c);
    printf("enter the marks of fourth subject: ");
    scanf("%d",&d);
    printf("enter the marks of fifth subject: ");
    scanf("%d",&e);
    average=(a+b+c+d+e)/5;
    printf("The average is=%d", average);
}