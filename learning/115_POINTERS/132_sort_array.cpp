// to sort an array

#include <iostream>
#include <new>
using namespace std;
void sort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void read(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}
void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int n;
    cout << "\n Enter the number of elements = ";
    cin >> n;
    int *arr = new int[n];
    if (arr != NULL)
    {
        read(arr, n);
        sort(arr, n);
        display(arr, n);
    }
    // display(arr, n);

    return 0;
}