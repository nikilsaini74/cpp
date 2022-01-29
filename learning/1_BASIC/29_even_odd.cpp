#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any number = ";
    cin >> num;

    if (num % 2 == 0)
        cout << "\n"
             << num << " is an even number";
    else
        cout << "\n"
             << num << " is an odd number";

    return 0;
}