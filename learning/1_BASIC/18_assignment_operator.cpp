#include <iostream>
using namespace std;
int main()
{
    int a = 3, b = 5;
    cout << "\n a=3 b=5";
    a += b * 7; // x += y means x = x + y
    cout << "\n after evaluation a=" << a << " and b=" << b;

    return 0;
}