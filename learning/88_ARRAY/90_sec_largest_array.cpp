// To find second largets number using array.

#include <iostream>
using namespace std;
int main()
{
    int n, i, arr[20], large = -1, largeIndex, sec_large = -1, sec_largeIndex;
    cout << "Enter the number of elements = ";
    cin >> n;
    cout << "\n Enter the elements = ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
            largeIndex = i;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] > sec_large && i != largeIndex)
        {
            sec_large = arr[i];
        }
    }

    cout << "\n The second largest number is = " << sec_large;
    cout << "\n The largest number is = " << large;
}