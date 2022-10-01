#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u')
    {
        cout << "Vowel" << endl;
    }
    else
    {
        cout << "consonant" << endl;
    }
    return 0;
}

