#include <iostream>
using namespace std;
int main()
{
    int t, x, y, z, a, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> z;
        a = 5 * x + 10 * y;
        if (a > z)
        {
            b = a / z;
            cout << b;
        }
        else
            cout << "0";
    }

    return 0;
}