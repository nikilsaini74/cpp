// To merge two unsorted array.

#include <iostream>
using namespace std;
int main()
{
    int n1, n2, m, i, index = 0, arr1[10], arr2[10], arr3[20];
    cout << "Enter n1 = ";
    cin >> n1;
    cout << "\n Enter the elements of first array = ";
    for (i = 0; i < n1; i++)
        cin >> arr1[i];
    cout << "\n********************************************";
    cout << "\nEnter n2 = ";
    cin >> n2;
    cout << "\n Enter the elements of second array = ";
    for (i = 0; i < n2; i++)
        cin >> arr2[i];
    cout << "\n********************************************";
    m = n1 + n2;
    for (i = 0; i < n1; i++)
    {
        arr3[index] = arr1[i];
        index++;
    }
    for (i = 0; i < n2; i++)
    {
        arr3[index] = arr2[i];
        index++;
    }
    cout << "\n The merged array is : ";
   // cout << "\n*******************************************" << endl;
    for (i = 0; i < m; i++)
        cout << arr3[i] << " ";
    return 0;
}