#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"enter the numbers of rows"<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++)
        {
        
            cout<<"* ";
            
        }
        n--;
        cout<<endl;
    }   return 0;
}