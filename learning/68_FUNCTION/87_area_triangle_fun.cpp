// Area of triangle using function.
//  area = sq root s(s-a)(s-b)(s-c)
//  s = a+b+c/2

#include <iostream>
#include <math.h>
using namespace std;
float area(int a, int b, int c)
{
    float s = (a + b + c) / 2;
    int A = b + c;
    int B = a + c;
    int C = b + a;

    if ((C > c) && (A > a) && (B > b))
        return sqrt(s * (s - a) * (s - b) * (s - c));
    else
        return -1;
}

int main()
{
    int a, b, c;
    cout << "Enter the three sides of triangle = ";
    cin >> a >> b >> c;
    cout << "\n AREA = " << area(a, b, c);
    return 0;
}