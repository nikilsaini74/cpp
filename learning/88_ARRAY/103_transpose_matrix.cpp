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
    int matrix[x][y], transpose[x][y];
    input(matrix, 3, 3);
    cout << "\n The elements of matrix are = " << endl;
    output(matrix, 3, 3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            transpose[i][j] = matrix[j][i];
    }
    cout << "\n The elements of the transpose matrix are = " << endl;
    output(transpose, 3, 3);

    return 0;
}