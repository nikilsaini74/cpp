#include <iostream>
using namespace std;
int main()
{
    int n1, n2, m, i, index = 0, arr1[10], arr2[10], arr3[20];
    int index_1 = 0, index_2 = 0;
    cout << "Enter n1 = ";
    cin >> n1;
    cout << "\n Enter the elements of first array = ";
    for (i = 0; i < n1; i++)
        cin >> arr1[i];
    cout << "\nEnter n2 = ";
    cin >> n2;
    cout << "\n Enter the elements of second array = ";
    for (i = 0; i < n2; i++)
        cin >> arr2[i];
    m = n1 + n2;
    while (index_1 < n1 && index_2 < n2)
    {
        if (arr1[index_1] < arr2[index_2])
        {
            arr3[index] = arr1[index_1];
            index_1++;
        }
        else
        {
            arr3[index] = arr2[index_2];
            index_2++;
        }
        index++;
    }
    // if elements of first array is over and second array has some elements.
    if (index_1 == n1)
    {
        while (index_2 < n2)
        {
            arr3[index] = arr2[index_2];
            index_2++;
            index++;
        }
    }
    // if elements of second array is over and first array has some elements.
    if (index_2 == n2)
    {
        while (index_1 < n1)
        {
            arr3[index] = arr1[index_1];
            index_1++;
            index++;
        }
    }
    cout << "\n The merged array is : ";
    for (i = 0; i < m; i++)
        cout << arr3[i] << " ";
}