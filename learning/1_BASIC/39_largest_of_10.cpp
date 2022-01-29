#include <iostream>
using namespace std;
int main()
{
    int i = 0, large = -1, num;
    while (i <= 10)
    {
        cout << "Enter the number = ";
        cin >> num;
        large = num > large ? num : large;
        i++;
    }
    cout << "\nThe largest number is " << large;

    return 0;
}