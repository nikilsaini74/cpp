// to read and display a 3 x 3 matrix

#include <iostream>
using namespace std;
int main()
{
    int mat[3][3];
    cout << "Enter elements of the matrix = ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << "\n Eleents of matrix are = ";
    for (int i = 0; i < 3; i++)
    {
        cout << "\n";
        for (int j = 0; j < 3; j++)
        {
            cout << "\t" << *(*(mat + i) + j);
        }
    }

    return 0;
}