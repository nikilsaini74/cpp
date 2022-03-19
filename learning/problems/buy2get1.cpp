#include <iostream>
using namespace std;
int main()
{
    int x, r, n, set, minAmt = 0;
    cin >> x;
    while (x > 0)
    {
        cin >> n >> r;
        set = n / 3;
        minAmt = (2 * set * r);
        int leftOver = n % 3;
        if (leftOver < 3)
        {
            minAmt += leftOver * r;
        }

        cout << minAmt << "\n";
        minAmt = 0;
        x--;
    }

    return 0;
}