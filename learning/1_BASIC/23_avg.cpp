#include <iostream>
using namespace std;
int main()
{
    float a, b;
    float avg;
    cout.precision(4);

    cout << "enter two numbers = ";
    cin >> a >> b;

    avg = (a + b) / 2;

    cout << "\n average = " << avg;

    return 0;
}