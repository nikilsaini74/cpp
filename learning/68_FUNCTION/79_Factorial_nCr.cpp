// To calculate C(n/r) :

#include <iostream>
using namespace std;
int Fact(int n);
int main()
{
    int n, r, NUM, DENO;
    float result;
    cout << " Enter the value of n and r = ";
    cin >> n >> r;
    NUM = Fact(n);
    DENO = Fact(r) * Fact(n - r);
    result = NUM / DENO;
    cout << "\n C(n/r) = " << result;
}
int Fact(int n)
{
    int Factorial = 1, i;
    for (int i = 1; i <= n; i++)
        Factorial = Factorial * i;
    return Factorial;
}