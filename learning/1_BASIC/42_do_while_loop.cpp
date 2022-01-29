#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "Enter the value of n = ";
    cin >> n;
    do
    {
        cout << "\n |  " << i << "  |  " << pow(i, 2) << "  |  " << pow(i, 3) << "  |  ";
        i++;
    } while (i <= n);
    cout << "\n ----------------------------";

    return 0;
}