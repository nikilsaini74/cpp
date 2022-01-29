#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int binNum, decNum = 0, i = 0, rem;
    cout << "Enter any binary number = ";
    cin >> binNum;

    while (binNum != 0)
    {
        rem = binNum % 10;
        decNum += rem * pow(2, i);
        binNum = binNum / 10;
        i++;
    }
    cout << "\nThe decimal equivalent = " << decNum;
    return 0;
}