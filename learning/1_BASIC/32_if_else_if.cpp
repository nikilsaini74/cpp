#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any integer = ";
    cin >> num;

    if (num == 0)
        cout << "\nThe number is zero.";

    else if (num > 0)
        cout << "\nThe number is positive.";

    else
        cout << "\nThe number is negative.";

    return 0;
}