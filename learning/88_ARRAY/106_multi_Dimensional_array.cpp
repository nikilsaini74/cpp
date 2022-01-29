// to display a 2 x 2 x 2 array.

#include <iostream>
using namespace std;
int main()
{
    int arr[3][3][3], i, j, k;
    cout << "\n Enter the elements of matrix : ";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                // cout << "\n array[" << i << "][" << j << "][" << k << "] = ";
                cin >> arr[i][j][k];
            }
        }
    }
    cout << "\n The matrix is : " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                cout << "array[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << "\t";
            }
        }
    }
    return 0;
}