#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0, temp;
    cout << "Enter any number = ";
    cin >> num;
    cout << "\nSum of the digits is = ";
    while (num != 0)
    {
        temp = num % 10;
        sum += temp;
        num = num / 10;
    }
    cout << sum;
    return 0;
}