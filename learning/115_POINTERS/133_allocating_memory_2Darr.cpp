// dynamically allocating memory to 2D array

#include <iostream>
#include <new>
using namespace std;
int **Allocating_memory(int **arr, int rows, int cols)
{
    arr = new int *[rows];
    if (arr == NULL)
    {
        cout << "\n Memory allocation not possible";
        exit(1);
    }
    for (int i = 0; i < rows; i++)
        arr[i] = new int[cols]; // dynamically allocating memory for eah row's columns
    return arr;
}
void readMat(int **arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cin >> arr[i][j];
    }
}
void displayMat(int **arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << " " << arr[i][j];
    }
}
void delMat(int **arr, int rows) // free memory allocated
{
    for (int i = 0; i < rows; i++)
        delete arr[i]; // del each col and row
    delete[] arr;      // del the pointer array
}
int main()
{
    int **arr, rows, cols;
    cout << "\n Enter no. of rows and columns = ";
    cin >> rows >> cols;
    arr = Allocating_memory(arr, rows, cols);
    cout << "\n Enter the elements of array = ";
    readMat(arr, rows, cols);
    cout << "\n the array is = ";
    displayMat(arr, rows, cols);
    delMat(arr, rows);
    return 0;
}