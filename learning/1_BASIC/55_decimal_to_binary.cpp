#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int decNum, rem, binNum = 0, i = 0;
    cout << "Enter any decimal number = ";
    cin >> decNum;
    while (decNum != 0)
    {
        rem = decNum % 2;
        binNum += rem * pow(10, i);
        decNum = decNum / 2;
        i++;
    }
    cout << "\nThe binary equivalent = " << binNum;
    return 0;
}