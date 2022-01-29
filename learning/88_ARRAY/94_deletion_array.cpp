#include <iostream>
using namespace std;
int main()
{
    int n, i, pos, arr[20];
    cout << "Enter the number of elements in array = ";
    cin >> n;
    cout << "\n Enter the elements = ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\n Enter the position at which number to be deleted = ";
    cin >> pos;
    for (i = pos - 1; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }

    cout << "\n Array after deletion of number at position " << pos << " is : ";
    for (i = 0; i < n - 1; i++)
        cout << arr[i] << " ";

    return 0;
}