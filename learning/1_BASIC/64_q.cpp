#include <iostream>
using namespace std;
int main()
{
    int i;
    float f;
    cout << "ENter any floating point number and an integer = ";
    cin >> f >> i;

    if (f > 4.14)
    {
        cout << "\nNew integer = " << i + 10;
    }
    else
        cout << "\nNew integer = " << i;
    return 0;
}