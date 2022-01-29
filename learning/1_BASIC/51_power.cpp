#include <iostream>
using namespace std;
int main()
{
    int i, num, n;
    long int result = 1;
    cout << "Enter the number = ";
    cin >> num;

    cout << "\nTill which power to calculate : ";
    cin >> n;

    for (i = 1; i <= n; i++)
        result = result * num;
    cout << "\npow (" << num << "," << n << ") = " << result;

    return 0;
}