#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "enter two numbers : ";
    cin >> a >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "\n first number is " << a << " second number is " << b;

    return 0;
}