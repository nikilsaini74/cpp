#include <iostream>
using namespace std;
int main()
{
    int n, i, arr[20], j, flag = 0;
    cout << "Enter the number of digits = ";
    cin >> n;
    cout << "\n Enter the elements = ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                flag = 1;
                cout << "\n Duplicate number " << arr[i] << " found at location " << i << " and " << j;
            }
        }
    }
    if (flag == 0)
        cout << "\n No Duplicate";
}