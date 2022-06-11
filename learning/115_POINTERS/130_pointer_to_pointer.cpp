#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int *px;
    int **ppx;
    px = &x;
    ppx = &px;
    cout << **ppx;

    return 0;
}