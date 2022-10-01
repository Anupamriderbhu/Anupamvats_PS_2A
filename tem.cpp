#include <iostream>
using namespace std;
int main()
{
    double temp;
    cin>>temp;
    cout<<"enter the value of tem"<< endl;
    if (temp < 0)
    {
        cout << "freezing weather";
    }
    else if (temp < 10 && temp > 0)
    {
        cout << "very cold weather";
    }
    else if (temp < 20 && temp > 10)
        {
            cout << "normal in temp";
        }
    else if (temp < 40 && temp > 30)
    {
        cout << "its hot";
    }
    else if(temp>=40)
     {
        cout<<"its very hot";
    }
    return 0;
}