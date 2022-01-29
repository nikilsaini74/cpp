// Pattern using Default Arguments.

#include <iostream>
using namespace std;
void print(char c = '%', int n = 6, int r = 1);
int main()
{
    char c;
    int num_rows, num_cols;
    cout << "\n Enter the character, number of rows and columns : ";
    cin >> c >> num_rows >> num_cols;
    print();
    print(c);
    print(c, 10);
    print(c, 15, 2);
}
void print(char c, int n, int r)
{

    for (int i = 0; i < r; i++)
    {
        cout << "\n";
        for (int j = 0; j < n; j++)
            cout << c;
    }
}
