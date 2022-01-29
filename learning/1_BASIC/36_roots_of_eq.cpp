#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c;
    float D, deno, r1, r2;
    cout << "Enter a, b, c = ";
    cin >> a >> b >> c;

    D = (b * b) - (4 * a * c);
    deno = 2 * a;

    if (D > 0)
    {
        cout << "\nREAL ROOTS";
        r1 = -b + sqrt(D) / deno;
        r2 = -b - sqrt(D) / deno;
        cout << "\n ROOT1 = " << r1 << " ROOT2 = " << r2;
    }
    else if (D == 0)
    {
        cout << "\nEQUAL ROOTS = ";
        r1 = -b / deno;
        cout << "\nROOT1 = ROOT2 = " << r1;
    }
    else
        cout << "\nIMAGINARY ROOTS";

    return 0;
}