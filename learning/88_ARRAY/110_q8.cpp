// arrange values of array in such a way that even number preceed the odd numbers.

#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int n, arr[20], even[20], odd[20], e = 0, o = 0;

    cout << "Enter the number of elements = ";
    cin >> n;
    cout << "\n Enter the elements = ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[e] = arr[i];
            e++;
        }
        else
        {
            odd[o] = arr[i];
            o++;
        }
    }
    for (int i = 0; i < e; i++)
    {
        cout << even[i] << "\t";
    }
    for (int i = 0; i < o; i++)
    {
        cout << odd[i] << "\t";
    }

    return 0;
}