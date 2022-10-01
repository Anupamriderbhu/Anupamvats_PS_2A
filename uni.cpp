#include<iostream>
using namespace std;

int main()


{
    int n,m;
    cin>>n;

    int a[n];
    
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    }
    
    cin>>m;

    int b[m];

     int k = m +n;

    int c[k];

    for(int i=0;i<m;i++)
    {
    	cin>>b[i];
    	c[i]=b[i];
    }
   
     
     for(int i=0;i<n;i++)
     {
     	
     int count = 0;

     	for(int j=0;j<m;j++)
     	{
     		if(a[i]!=b[j]){
     		count++;
     			
     		}
            
     		}
     		if (count==m)
     		{
     		   c[m]=a[i];
     		   m++;
     		}
     	}
     	
     	cout<<"result is "<<endl;
     	for(int i=0;i<k;i++)
     	{
     		cout<<c[i]<<" ";
     	}
     
     return 0 ;	
}