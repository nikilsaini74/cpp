// area of a triangle

#include <iostream>
using namespace std;
void read(float *b, float *h)
{
    cout << "\n Enter the base and height of triangle = ";
    cin >> *b >> *h;
}
void c_area(float *b, float *h, float *a)
{
    *a = 0.5 * (*b) * (*h);
}
int main()
{
    float base, height, area;
    read(&base, &height);
    c_area(&base, &height, &area);
    cout << "\n Area of triangle = " << area;

    return 0;
}