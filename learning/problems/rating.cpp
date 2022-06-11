#include <iostream>
using namespace std;
int main()
{
    int x, y, t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;

        if (y >= x && y <= (x + 200))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}