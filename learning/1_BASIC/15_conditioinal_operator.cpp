#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 3, c = 7, S;
    S = (a < b ? (a < c ? a : c) : (b < c ? b : c));

    cout << "S is " << S;

    return 0;
}