#include <iostream>
using namespace std;
int main()
{
    float a, b, c, d, total;
    cout << "enter no of Rs.10,5,2,1 coins = ";
    cin >> a >> b >> c >> d;

    total = a * 10 + b * 5 + c * 2 + d * 1;

    cout << "\n total = " << total;

    return 0;
}