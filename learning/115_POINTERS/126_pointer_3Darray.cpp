#include <iostream>
using namespace std;
int main()
{
    int arr[2][2][2];
    int (*parr)[2][2] = arr;
    // parr = arr;
    cout << "\n Enter the elements of 2 x 2 x 2 array : ";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
                cin << arr[i][j][k];
        }
    }
    cout << "\n Output : ";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
                cout << " " << *(*(*(arr + i) + j) + k);
        }
    }

    return 0;
}