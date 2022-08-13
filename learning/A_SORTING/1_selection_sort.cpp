#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int n)
{
    int min_idx;
    for (int i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[i])
            {
                min_idx = j;
                swap(&arr[min_idx], &arr[i]);
            }
    }
}
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[] = {34, 67, 12, 20, 8};
    int n = 5;
    printArr(a, n);
    selectionSort(a, n);
    cout << "Sorted = " << endl;
    printArr(a, n);

    return 0;
}