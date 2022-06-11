#include <iostream>
using namespace std;

int main()
{

    int i = 0, j = 1, n, k = 1;
    cin >> n;

    while (i < n)
    {
        int m = (n - i);
        while (j <= (n - i))

        {
            cout << j++;
        }

        while (k <= (2 * i))
        {
            cout << "*";
            k++;
        }

        while (m > 0)
        {
            cout << m--;
        }

        j = 1;
        m = n - 1;
        k = 1;
        i++;
        cout << "\n";
    }

    return 0;
}