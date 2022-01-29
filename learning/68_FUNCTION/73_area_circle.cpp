// Area of circle using function

#include <iostream>
using namespace std;
float c_area(float r);
int main()
{
    float radius, area;
    cout << "\n Enter the radius of circle : ";
    cin >> radius;
    area = c_area(radius);
    cout << "\n AREA = " << area;
}
float c_area(float r)
{
    return (3.14 * r * r);
}
