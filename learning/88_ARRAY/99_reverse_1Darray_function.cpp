// to merge two integer arrays and reverse it.

#include <iostream>
using namespace std;
void read_array(int arr1[10], int n)
{
    int i;
    cout << "\n Enter the elements of array = ";
    for (i = 0; i < n; i++)
        cin >> arr1[i];
}
void merge_array(int arr1[], int arr2[], int arr3[], int n, int m)
{
    int i, j = 0;
    for (i = 0; i < n; i++)
    {
        arr3[j] = arr1[i];
        j++;
    }
    for (i = 0; i < m; i++)
    {
        arr3[j] = arr2[i];
        j++;
    }
}
void disp_array(int arr3[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr3[i] << " ";
}
void reverse_array(int arr3[], int m)
{
    int i, j;
    for (i = m - 1, j = 0; i >= 0; i--, j++)
        cout << arr3[i] << " ";
}
int main()
{
    int arr1[10], arr2[10], arr3[20], n1, n2, t;
    cout << "\n Enter n1 = ";
    cin >> n1;
    read_array(arr1, n1);
    cout << "\n Enter n2 = ";
    cin >> n2;
    read_array(arr2, n2);
    t = n1 + n2;
    merge_array(arr1, arr2, arr3, n1, n2);
    cout << "\n The merged array is : ";
    disp_array(arr3, t);
    cout << "\n The reverse of the merged array is : ";
    reverse_array(arr3, t);

    return 0;
}