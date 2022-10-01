#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout << "enter the value of a,b,c \n";
    if ((a==b) && (b==c) && (a=c))
    {
        cout<< "equilateral triangle" <<endl;
    }
    else if((a==b) || (b==c) ||( a==c))
    {
        cout<<"isosceles triangle"<<endl;
    }
    else
    {
        cout<< "scalene triangle"<<endl;
    }
    return 0;
}

