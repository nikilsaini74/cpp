// To read, display, add, subtract to distances in kilometers and metres.

#include <iostream>
using namespace std;
struct DISTANCE
{
    int km;
    int m;
};
DISTANCE d1, d2, d3, d4;
void read(DISTANCE &d1, DISTANCE &d2)
{
    cout << "\nEnter first distance in km and m = ";
    cin >> d1.km >> d1.m;
    cout << "\nEnter second distance in km and m = ";
    cin >> d2.km >> d2.m;
}
void display(DISTANCE d1, DISTANCE d2)
{
    cout << "First distance = " << endl;
    cout << d1.km << " kms " << d1.m << " m" << endl;
    cout << "Second distance = " << endl;
    cout << d2.km << " kms " << d2.m << " m" << endl;
}
DISTANCE add(DISTANCE d1, DISTANCE d2)
{
    d3.km = d1.km + d2.km;
    d3.m = d1.m + d2.m;
    if (d3.m > 1000)
    {
        d3.m = d3.m % 1000;
        d3.km = d3.km + 1;
    }
    return d3;
}
DISTANCE sub(DISTANCE d1, DISTANCE d2)
{
    if (d1.km > d2.km)
    {
        d4.km = d1.km - d2.km;
        d4.m = d1.m - d2.m;
    }
    else
    {
        d4.km = d2.km - d1.km;
        d4.m = d2.m - d1.m;
    }
    if (d4.m < 0)
    {
        d4.km = d4.km - 1;
        d4.m = d4.m + 1000;
    }
    return d4;
}
main()
{
    read(d1, d2);
    display(d1, d2);
    d3 = add(d1, d2);
    cout << d3.km << " " << d3.m << endl;
    d4 = sub(d1, d2);
    cout << d4.km << " " << d4.m;

    return 0;
}