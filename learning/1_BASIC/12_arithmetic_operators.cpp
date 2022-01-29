#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int add = 0, sub = 0, mul = 0, idiv = 0, modiv = 0;
    float fdiv = 0.0;
    cout << "enter two numbers : ";
    cin >> a >> b;

    add = a + b;
    sub = a - b;
    mul = a * b;
    idiv = a / b;
    modiv = a % b;
    fdiv = (float)a / b;

    cout << "\n"
         << a << " + " << b << " = " << add;
    cout << "\n"
         << a << " - " << b << " = " << sub;
    cout << "\n"
         << a << " * " << b << " = " << mul;
    cout << "\n"
         << a << " / " << b << " = " << idiv;
    cout << "\n"
         << a << " % " << b << " = " << modiv;
    cout << "\n"
         << a << " / " << b << " = " << fdiv;

    return 0;
}