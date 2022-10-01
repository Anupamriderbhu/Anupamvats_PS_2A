#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    int rows=3;
    char character='A';
   {
    for(i=0; i<rows; i++)
    {
        for(j=0;j<=i; j++)
        {
            cout<<character<<" ";

        }
        cout<<endl;
       character++;
    }
    return 0;
    
    
    }



}