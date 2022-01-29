#include <iostream>
using namespace std;
int main()
{
    int arr[7][7] = {0};
    int i, j;
    arr[0][0] = arr[1][0] = arr[1][1] = 1;
    for (i = 2; i < 7; i++)
    {
        arr[i][0] = 1;
        for (j = 1; j < 7; j++)
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << arr[i][j] << "\t";
        cout << "\n";
    }
    return 0;
}