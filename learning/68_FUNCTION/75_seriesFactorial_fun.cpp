#include <iostream>
using namespace std;
#include <math.h>
int Fact(int n);
int main()
{
    int n, i, NUM, DENO;
    float sum = 0.0;
    cout << "Enter the value of n = ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        NUM = pow(i, i);
        DENO = Fact(i);
        sum += (float)NUM / DENO;
    }
    cout << "\n 1/1! + 4/2! + 27/3! +   = " << sum;
}
int Fact(int n)
{
    int f = 1, i;
    for (i = n; i >= 1; i--)
        f = f * i;
    return f;
}