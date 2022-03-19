#include <iostream>
using namespace std;
int main()
{
    int x, t, counter = 0;
    cin >> x;
    while (x > 0)
    {
        cin >> t;
        if (t % 5 == 0)
        {
            while (t > 5)
            {
                t -= 10;
                counter++;
            }
            if (t == 5)
            {
                counter++;
            }
            cout << counter << "\n";
        }
        else
            cout << -1 << "\n";

        counter = 0;
        x--;
    }

    return 0;
}