#include <iostream>
using namespace std;
int main()
{
    int i, j,n=5;
    for (i = n; i >= 1; i--)
    {
        for (j = i; j <= n; j++)
        {
            cout << (char)('A' + j - 1) << " ";
        }
        cout << endl;
    }
    return 0;
}