#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        cout << "\n Pass " << i << "-";
        for (j = 1; j <= 5; j++)
            cout << " " << j;
    }

    return 0;
}