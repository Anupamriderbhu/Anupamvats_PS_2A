#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int spaces = n - 1;
    int stars = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= stars; k++)
        {
            cout << "*";
        }
            cout <<"";
        
    }

}