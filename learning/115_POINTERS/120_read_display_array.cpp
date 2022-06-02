// read and display array using pointers

#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[10], *parr = arr;
    cout << "Enter size of array = ";
    cin >> n;
    cout << "\n Enter the elements = ";
    for (int i = 0; i < n; i++)
        cin >> *(parr + i);
    for (int i = 0; i < n; i++)
        cout << *(parr + i) << endl;

    return 0;
}