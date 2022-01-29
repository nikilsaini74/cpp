#include <iostream>
using namespace std;
int main()
{
    int i, j, a = 0;

    for (i = 1; i <= 4; i++)
    {
        cout << "\n";
        for (j = 1; j <= i; j++)
            cout << a++;
    }
    return 0;
}
