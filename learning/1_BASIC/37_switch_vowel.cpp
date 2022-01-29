#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any character = ";
    cin >> ch;
    switch (ch)
    {
    case 'A':
    case 'a':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        cout << "\nIt is a VOWEL";
        break;
    default:
        cout << "\nIt is not a vowel";
    }

    return 0;
}