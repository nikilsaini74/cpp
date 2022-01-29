// To fill a square matrix with diagonals 0, upper triangle with 1 and lower triangle with -1.

#include <iostream>
using namespace std;
const int x = 11;
const int y = 11;
void output(int arr[x][y], int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
}
int main()
{
    int mat[x][y], row, col, i, j;
    cout << "\n Enter the number of rows and columns of matrix = ";
    cin >> row >> col;
    if (row != col)
    {
        cout << "\n This is not a square matrix.";
        exit(1);
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
                mat[i][j] = 0;
            else if (i < j)
                mat[i][j] = 1;
            else // if (i > j)
                mat[i][j] = -1;
        }
    }
    output(mat, row, col);

    return 0;
}