#include <iostream>
#include <time.h>
using namespace std;
const int x = 11;
const int y = 11;

void input(int arr[x][y], int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        srand(time(0));
        // cout << "\n Enter the values of row " << i  << " : ";
        for (int j = 0; j < b; j++)
        {
            // cin >> arr[i][j];
            arr[i][j] = (rand() * (i + 1) * (j + 1) % 100);
        }
        // cin.ignore(20, '\n');
    }
}
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
    int row1, col1, row2, col2, res_row, res_col;
    int mat1[x][y], mat2[x][y], res[x][y];
    cout << "\n Enter the numbers of rows and columns in first matrix = ";
    cin >> row1 >> col1;
    cout << "\n Enter the number of rows and columns in second matrix = ";
    cin >> row2 >> col2;
    if (col1 != row2)
    {
        cout << "\n The columns of first matrix must be equal to row of second matrix";
        exit(1); //'exit' is used to end the code.
    }
    input(mat1, row1, col1);
    cout << "\n First matrix : " << endl;
    output(mat1, row1, col1);
    input(mat2, row2, col2);
    cout << "\n Second matrix : " << endl;
    output(mat2, row2, col2);
    res_row = row1, res_col = col2;
    for (int i = 0; i < res_row; i++)
    {
        for (int j = 0; j < res_col; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < col1; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
    cout << "\n Product matrix : " << endl;
    output(res, res_row, res_col);
    return 0;
}