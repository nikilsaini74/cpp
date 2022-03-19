#include <iostream>
using namespace std;
int main()
{
    int x, r, n, amt, counter = 0;
    cin >> x;
    while (x > 0)
    {
        cin >> r >> n;
        amt = r * n;
        while (amt >= 100)
        {
            amt -= 100;
            counter++;
        }
        cout << counter << "\n";
        counter = 0;
        x--;
    }

    return 0;
}