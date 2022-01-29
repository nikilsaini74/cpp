#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num;
    do
    {
        cout << "Enter any number. Enter 999 to exit. ";
        cin >> num;
        if (num == 999)
            break;
        if (num < 0)
        {
            cout << "\nSquare root of negative numbers is not defined.";
            continue;
        }
        cout << "\nSquare root of " << num << " is " << sqrt(num);
        cout << "\n";

    } while (1);
    return 0;
}