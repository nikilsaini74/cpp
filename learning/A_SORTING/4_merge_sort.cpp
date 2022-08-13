#include <iostream>
using namespace std;
void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
        a[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        b[j] = arr[mid + 1 + i];
}
int i = 0, j = 0, k = l;


int main()
{

    return 0;
}