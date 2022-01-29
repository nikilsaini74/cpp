#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    //Armstrong number is a num whose sum of cubes of digits is equal to the number
    int n, num, sum = 0, r;
    cout << "Enter the number = ";
    cin >> num;
    n = num;
    while (n > 0)
    {
        r = n % 10;
        sum += pow(r, 3);
        n = n / 10;
    }
    if (sum == num)
        cout << "\n"
             << num << " is an Armstrong number";
    else
        cout << "\n"
             << num << " is not an Armstrong number";

    return 0;
}