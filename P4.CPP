#include <iostream>
using namespace std;
int main()
{
    int i, j, n = 4;
    char character = 'A';
    for (i = 0; i < n; i++)
    {
        char ch = character;
        for (j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
        character++;
    }
    return 0;
}