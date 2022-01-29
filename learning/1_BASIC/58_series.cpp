#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    float sum = 0.0, a, i;
    cout << "Enter the valur of n = ";
    cin >> n;
    for (i = 1.0; i <= n; i++)
    {
        a = 1 / i;
        sum += a;
    }
    cout << "\nThe sum of the series 1/1 + 1/2 + ....+1/" << n << " = " << sum;
    return 0;
}