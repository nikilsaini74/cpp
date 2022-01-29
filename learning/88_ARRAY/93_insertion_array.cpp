// inserting an element between an array.

#include <iostream>
using namespace std;
int main()
{
    int n, i, pos, num, arr[20];
    cout << "Enter the number of elements in array = ";
    cin >> n;
    cout << "\n Enter the elements = ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "\n Enter the number to be inserted = ";
    cin >> num;
    cout << "\n Enter the position at which number to be added = ";
    cin >> pos;
    for (i = n; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = num;
    cout << "\n Array after insertion of " << num << " is : ";
    for (i = 0; i < n + 1; i++)
        cout << arr[i] << " ";

    return 0;
}