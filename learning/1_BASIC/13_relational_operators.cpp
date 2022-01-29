#include <iostream>
using namespace std;
int main()
{
    int x = 20, y = 50;
    cout << x << " < " << y << " = " << (x < y) << endl;
    cout << x << " > " << y << " = " << (x > y) << endl;
    cout << x << " == " << y << " = " << (x == y) << endl;
    cout << x << " != " << y << " = " << (x != y) << endl;
    cout << x << "<= " << y << " = " << (x <= y) << endl;
    cout << x << " >= " << y << " = " << (x >= y) << endl;

    return 0;
}