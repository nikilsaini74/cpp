#include <iostream>
using namespace std;
int main()
#define N 5

{
    int i, j, k, l;
    for (i = 1; i <= N; i++)
    {
        for (k = N; k >= i; k--)
            cout << " ";
        for (j = 1; j <= i; j++)
            cout << j;
        for (l = j - 2; l > 0; l--)
            cout << l;

        cout << "\n";
    }

    return 0;
}