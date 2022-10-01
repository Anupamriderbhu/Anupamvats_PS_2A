#include <iostream>
using namespace std;
int main()
{
    int i = 1, j = 0;
    int rows = 3;
    char character = 'A';
    while (i <= rows)
    {
        while (j <= i-1)
        {
            cout << character << " ";
            j++;
        }
        cout <<endl;
        character++;
    }
    cout<<endl;
    character++;
    i++;
    return 0;
}