// To find mean of n numbers using array using pointers

#include <iostream>
using namespace std;
int main()
{
    int n, arr[20], sum = 0;
    int *pn = &n, *parr = arr, *psum = &sum;
    float mean = 0.0, *pmean = &mean;
    cout << "\n Enter the value of n = ";
    cin >> *pn;
    cout << "\n Enter the elemenys = ";
    for (int i = 0; i < n; i++)
        cin >> *(parr + i);
    for (int i = 0; i < *pn; i++)
        *psum += *(arr + i);
    *pmean = *psum / *pn;
    cout << "\n Sum is : " << *psum;
    cout << "\n Mean is : " << *pmean;
    return 0;
}