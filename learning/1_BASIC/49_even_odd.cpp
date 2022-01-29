#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the value of m = ";
    cin >> m;
    cout << "Enter the value of n = ";
    cin >> n;

    for (m = m; m <= n; m++)
    {
        if (m % 2 == 0)
            cout << "\n"
                 << m << " is an even number.";
        else
            cout << "\n"
                 << m << " is an odd number.";
    }
    return 0;
}