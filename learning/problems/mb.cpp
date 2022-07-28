#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t, s, x, y, z;
    ;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> s >> x >> y >> z;
        if ((s - x - y) >= z)
            cout << 0 << endl;
        else if (s - (min(x, y)) >= z)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }

    return 0;
}