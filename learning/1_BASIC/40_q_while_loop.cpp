#include <iostream>
using namespace std;
int main()
{
    int num;
    int neg = 0, pos = 0, zero = 0;
    cout << "Enter -1 to exit !";
    cout << "\nEnter any number = ";
    cin >> num;

    while (num != -1)
    {
        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;
        cout << "\n\nEnter any number = ";
        cin >> num;
        cout << "\nCount of positives = " << pos;
        cout << "\nCount of negatives = " << neg;
        cout << "\nCount of zeros = " << zero;
    }

    return 0;
}