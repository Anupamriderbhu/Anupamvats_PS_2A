#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    k=1;
    for(i=1;i<5;i+=2)
    {
        for(j=5;j>=i;j--)
    {
        if(j>i)
        cout<<"  ";
        else
        cout<<k++;
    }
    cout<<endl;
}
}