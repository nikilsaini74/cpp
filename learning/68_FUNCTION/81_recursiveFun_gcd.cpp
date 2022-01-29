// GCD using recursive function

#include <iostream>
using namespace std;
int GCD(int, int);
int main()
{
    int num1, num2, res;
    cout << "Enter two numbers = ";
    cin >> num1 >> num2;
    res = GCD(num1, num2);
    cout << "\n GCD of " << num1 << " and " << num2 << " = " << res;
}
int GCD(int x, int y)
{
    int rem;
    rem = x % y;
    if (rem == 0)
        return y;
    else
        return (GCD(y, rem));
}
