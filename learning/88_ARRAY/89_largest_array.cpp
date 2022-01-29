// To find largest of n numbers using array.

#include <iostream>
using namespace std;
int main()
{
    int i, n, arr[20], large = 0;
    cout << "\n Enter the number of elements in the array = ";
    cin >> n;
    cout << "\n Enter the elements :\n ";
    cin >> arr[0];
    large = arr[0];

    for (i = 1; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > large)
            large = arr[i];
    }
    cout << "\n Largest number is : " << large;

    return 0;
}