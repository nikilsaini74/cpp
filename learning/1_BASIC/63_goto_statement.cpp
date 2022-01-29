#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
read:
    cout << "Enter 999 to stop.Enter any number = ";
    cin >> num;
    if (num != 999)
    {
        if (num < 0)
            goto read;
        sum += num;
        goto read;
    }
    cout << "\nThe sum of the positive numbers entered by user is = " << sum;
    return 0;
}