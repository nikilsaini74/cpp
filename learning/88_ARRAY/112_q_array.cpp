// input the elements of a two dimensional array. Make two arrays one that stores all odd elements and other even.

#include <iostream>
#include <time.h>
using namespace std;
const int x = 6;
const int y = 2;
void input(int arr[x][y], int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        srand(time(0));
        for (int j = 0; j < b; j++)
        {
            arr[i][j] = (rand() * (i + 1) * (j + 1) % 100);
        }
    }
}
int main()
{
    int arr[6][2], n = 0, m = 0;
    input(arr, 6, 2);
    int even[12], odd[12];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr[i][j] % 2 == 0)
            {
                even[n] = arr[i][j];
                n++;
            }
            else
            {
                odd[m] = arr[i][j];
                m++;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << even[i] << " ";
    cout << endl;
    for (int i = 0; i < m; i++)
        cout << odd[i] << " ";

    return 0;
}