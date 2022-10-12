#include<iostream>
using namespace std;
int sum1(int x, int y)
{
    return x+y;
}
int sum2(int x,int y,int z)
{
    return x+y+z;
}
float sum3(float x,float y)
{
    return x+y;
}
void Main()
{
    cout<<sum1(10,5);
    cout<<sum2(10,20,30);
    cout<<sum3(12.9,8.3);
}