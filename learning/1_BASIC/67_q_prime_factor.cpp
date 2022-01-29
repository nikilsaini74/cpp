#include <iostream>
using namespace std;
int main()
{
    int num, i, rem;
    cout << "Enter any number = ";
    cin >> num;
    for (i = 2; i <= num;)
    {
        if (num % i != 0)
            i++;

        else
        {
            num = num / i;
            cout << "Prime factors of number =" << i;
            cout << "\n";
        }
    }

    return 0;
}