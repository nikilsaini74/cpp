#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter any number = ";
    cin >> n;
    cout << "\nMultiplication table of " << n;
    cout << "\n****************************";
    for (i = 0; i <= 10; i++)
        cout << "\n"
             << n << " X " << i << " = " << (n * i);

    return 0;
}