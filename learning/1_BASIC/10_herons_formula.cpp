#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    float a, b, c, S, area;
    cout << "enter the three sides of the triangle : ";
    cout << "\n a = ";
    cin >> a;

    cout << " b = ";
    cin >> b;

    cout << " c = ";
    cin >> c;

    S = (a + b + c) / 2;
    area = sqrt(S * (S - a) * (S - b) * (S - c));

    cout << "Area = " << area;

    return 0;
}