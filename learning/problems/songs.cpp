#include <iostream>
using namespace std;
int main()
{
    int n, x, t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> x;
        cout << (n / (3 * x)) << endl;
    }

    return 0;
}