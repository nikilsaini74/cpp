// to demonstrate the allocation, reallocation and deallocation

#include <iostream>
#include <stdlib.h>
#include <new>
using namespace std;

int main()
{
    int *arr = new int[5];
    if (arr == NULL)
    {
        cout << "\n Memory Allocation Failed..."; // checking memory allocation
        exit(1);
    }
    cout << "\n Enter the elements of array = "; // allocation
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    cout << "\n The array elements are = ";
    for (int i = 0; i < 5; i++)
        cout << " " << arr[i];
    cout << "\n LETS HAVE A BIGGER ARRAY...";
    int *temp = new int[10];
    if (temp == NULL)
    {
        cout << "\n Memory Allocation Failed...";
        exit(1);
    }
    cout << "\n COPYING THE OLD ARRAY...";
    for (int i = 0; i < 5; i++)
        temp[i] = arr[i]; // reallocation
    delete[] arr;         // deallocation
    arr = temp;
    cout << "\n Enter new values = ";
    int j = 5;
    for (int i = 0; i < 5; i++)
        cin >> arr[j++];
    cout << "\n The array elements are = ";
    for (int i = 0; i < 10; i++)
        cout << " " << arr[i];
    delete[] arr;

    return 0;
}