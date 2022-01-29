#include <iostream>
using namespace std;
int main()
{
    int arr[3][2] = {1, 2, 3, 4, 5, 6};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        cout << "\n";
        for (j = 0; j < 2; j++)
            cout << arr[i][j] << "\t";
    }

    return 0;
}