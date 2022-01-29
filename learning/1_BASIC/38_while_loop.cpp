#include <iostream>
using namespace std;
int main()
{
    int m, n, sum = 0;
    cout << "Enter the value of m and n = ";
    cin >> m >> n;

    while (m <= n)
    {
        sum = sum + m;
        m = m + 1;
    }
    cout << "\nSUM = " << sum;

    return 0;
}