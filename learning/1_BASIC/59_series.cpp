#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    float sum = 0.0, a, i;
    cout << "Enter the value of n = ";
    cin >> n;
    for (i = 1.0; i <= n; i++)
    {
        a = 1 / pow(i, 2);
        sum += a;
    }
    cout << "\nThe sum of the series 1/1^2 + 1/2^2 + .... + 1/" << n << "^2 = " << sum;
    return 0;
}