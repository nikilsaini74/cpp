#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    char ch;
    cout << "Press any key : ";
    cin >> ch;
    if (isalpha(ch) > 0)
        cout << "\nThis is a character.";
    if (isdigit(ch) > 0)
        cout << "\nThis is a digit. ";
    if (isprint(ch) > 0)
        cout << "\nThis is a printable character.";
    if (ispunct(ch) > 0)
        cout << "\nThis is a punctuation mark.";
    if (isspace(ch) > 0)
        cout << "\nThis is a space.";

    return 0;
}