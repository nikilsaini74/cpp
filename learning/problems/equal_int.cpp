#include <iostream>
using namespace std;
int main()
{
    int t, x, y, n = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cout << "\n";
        cin >> x >> y;
        if (x == y)
            cout << "0";
        else if (x < y)
            cout << y - x;
        else if ((x - y) % 2 == 0)
            cout << (x - y) / 2;
        else
            cout << ((x - y) / 2) + 2;
    }

    return 0;
}