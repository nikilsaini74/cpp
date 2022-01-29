#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any character = " << endl;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
        cout << "It is Upper case";

    if (ch >= 'a' && ch <= 'z')
        cout << "It is Lower case";

    else if (ch >= '0' && ch <= '9')
        cout << "You entered a number";

    return 0;
}