#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any character : ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')

    {
        ch = ch + 32;
        cout << "\nThe entered character was in upper case.The lower character is " << ch;
    }
    else

    {
        ch = ch - 32;

        cout << "\nThe entered character was lower case.The upper character is " << ch;
    }
    return 0;
}