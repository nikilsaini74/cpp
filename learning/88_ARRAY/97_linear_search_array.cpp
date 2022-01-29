#include <iostream>
using namespace std;
int main()
{
    int arr[20], i, pos = -1, num, n;
    int found = 0;
    cout << "Enter the number of elements in array = ";
    cin >> n;
    cout << "\n Enter the elements = ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "\n Enter the number to search in array = ";
    cin >> num;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            found = 1;
            pos = i;
            cout << "\n " << num << " is found in the array at position = " << i;
            break;
        }
    }
    if (found == 0)
        cout << "\n " << num << " DOES NOT EXIST in array";
    return 0;
}