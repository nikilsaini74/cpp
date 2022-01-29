#include <iostream>
using namespace std;
int main()
{
    int num1, num2, rem, a, b;
    cout << "Enter two numbers = ";
    cin >> num1 >> num2;
    if (num1 > num2)
    {
        a = num1;
        b = num2;
    }
    else
    {
        a = num2;
        b = num1;
    }
    int gcd = 1;
    for (int i = 1; i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    cout << "GCD : " << gcd;

    return 0;
}