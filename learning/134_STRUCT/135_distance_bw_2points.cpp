// to enter two points and calculate distance between them

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    struct point
    {
        int x, y;
    };
    point p1, p2;
    float distance;
    cout << "Enter the coordinates of first point = ";
    cin >> p1.x >> p1.y;
    cout << "\n Enter the coordinates of second point = ";
    cin >> p2.x >> p2.y;
    distance = sqrt(pow((p2.x - p1.x), 2) - (pow((p2.y - p1.y), 2)));
    cout.precision(4);
    cout << "\n DISTANCE = " << distance;

    return 0;
}