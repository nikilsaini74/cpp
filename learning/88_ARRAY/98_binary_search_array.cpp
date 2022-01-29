#include <iostream>
using namespace std;
int main()
{
    int arr[20], n, i, pos = -1, num;
    int beg, end, mid, found = 0;
    cout << "Enter the number of elements in array = ";
    cin >> n;
    cout << "\n Enter the elements = ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "\n Enter the number to search in array = ";
    cin >> num;
    beg = 0, end = n - 1;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (arr[mid] == num)
        {
            cout << "\n " << num << " is present in the array at position = " << mid;
            found = 1;
            break;
        }
        else if (arr[mid] > num)
            end = mid - 1;
        else if (arr[mid] < num)
            beg = mid + 1;
    }
    if (found == 0)
        cout << "\n " << num << " DOES NOT EXIST in the array";

    return 0;
}