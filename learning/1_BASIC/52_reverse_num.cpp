#include <iostream>
using namespace std;
int main()
{
    int num, temp = 0;
    cout << "Enter any number = ";
    cin >> num;
    cout << "\nThe reverse of the number is = ";

    while (num != 0)
    {
        temp = num % 10;
        cout << temp;

        num = num / 10;
    }

    return 0;
}