#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    float x1, y1, x2, y2, D;
    cout << "enter the two coordinates : ";
    cout << "\n x1 = ";
    cin >> x1;

    cout << " y1 = ";
    cin >> y1;

    cout << " x2 = ";
    cin >> x2;

    cout << " y2 = ";
    cin >> y2;

    D = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    cout << "Distance : " << D;

    return 0;
}