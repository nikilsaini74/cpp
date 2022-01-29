#include <iostream>
using namespace std;
int main()
{
    double i, tax;
    cout << "Enter the income = ";
    cin >> i;

    if (i <= 150000)
        cout << "\nNO TAX";

    else if (i >= 150001 && i <= 300000)
    {
        tax = i * 0.10;
        cout << "\nTAX = " << tax;
    }
    else if (i >= 300001 && i <= 500000)
    {
        tax = i * 0.20;
        cout << "\nTAX = " << tax;
    }
    else
    {
        tax = i * 0.30;
        cout << "\nTAX = " << tax;
    }
    return 0;
}