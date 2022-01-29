#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int i = 0;
    cout << "\n The value of x outside the while loop is " << x;
    while (i < 3)
    {
        int x = i;
        cout << "\nThe value of x inside the while loop is " << x;
        i++;
    }
    cout << "\nThe value of x outside the while loop is " << x;
    return 0;
}