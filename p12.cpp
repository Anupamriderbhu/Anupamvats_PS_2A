#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cin >> n;
    for (i = 6; i >= 1; i--)
    {
        for (j = 1; j <= 6; j++)
        {
            if (j <= i)
                cout << j;
            else
                cout << " ";
        }
        for (j = 6; j >= 1; j--)
        {
            if (j <= i)
                cout << j;
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}