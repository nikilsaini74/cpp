#include <iostream>
using namespace std;
int main()
{
    float f;
    int i;
    cout << "Enter any integer : ";
    cin >> i;
    f = float(i);
    cout.setf(ios::showpoint);
    cout.precision(3);
    cout << "The floating of the integer is : " << f;

    cout << "\n Enter any floating number : ";
    cin >> f;
    i = int(f);
    cout << "The int of the floating number is : " << i;

    return 0;
}