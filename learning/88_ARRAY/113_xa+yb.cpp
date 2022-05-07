// X=2, Y=3; Find XA + YB

#include <iostream>
#include <time.h>
using namespace std;
const int x = 4;
const int y = 4;
void input(int mat[x][y], int a, int b)
{
    srand(time(0));
    for (int i = 0; i < a; i++)
    {

        for (int j = 0; j < b; j++)
        {

            mat[i][j] = (rand() % 100);
        }
    }
}
int main()
{
    int matA[4][4], matB[4][4], X = 2, Y = 3;
    input(matA, 4, 4);
    input(matB, 4, 4);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matA[i][j] *= X;
            matB[i][j] *= Y;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matA[i][j] + matB[i][j] << "\t";
            // cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}