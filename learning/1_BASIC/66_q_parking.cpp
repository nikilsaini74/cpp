#include <iostream>
using namespace std;
int main()
{
    int hour;
    char veh;
    cout << "Enter the type of vehicle(like c:car, b:bus, t:truck, s:scooter, m:motor cycle) : ";
    cin >> veh;
    cout << "Enter the number of hours= ";
    cin >> hour;

    if (veh == 't' || veh == 'b')
        cout << "\n  Parking charges = " << (hour * 20);

    else if (veh == 'c')
        cout << "\n  Parking charges = " << hour * 10;

    else
        cout << "\n  Parking charges = " << hour * 5;
    return 0;
}