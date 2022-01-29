#include <iostream>
using namespace std;
int main()
{
    int n;
    float sum = 0.0, a = 1, i;
    cout << "ENter the value of n = ";
    cin >> n;
    for (i = 2.0; i <= (2 * n); i = i + 2)
    {
        a = (i * i);
        sum += a;
        cout << a;
    }
    cout << "\nThe sum of square of the even numbers = " << sum;
    return 0;
}