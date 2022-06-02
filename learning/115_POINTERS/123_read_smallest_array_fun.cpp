// To read and print array, find smallest element and its position using function

#include <iostream>
using namespace std;
void read_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cin >> *(arr + i);
}
void find_small(int *small, int *arr, int *pos, int n)
{
    *small = arr[0], *pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) < *small)
        {
            *small = *(arr + i);
            *pos = i;
        }
    }
}
int main()
{
    int num[10], n, smallest, pos;
    cout << "Enter the number of elements = ";
    cin >> n;
    cout << "\n Enter the elements = ";
    read_array(num, n);
    find_small(&smallest, num, &pos, n);
    cout << "\n Smallest number in array is = " << smallest << " at position " << pos;

    return 0;
}