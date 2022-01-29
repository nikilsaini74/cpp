#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char ch;
    cout << "\n enter character in upper case : ";
    cin >> ch;

    cout << "\n in lower case : " << (char)tolower(ch);

    return 0;
}