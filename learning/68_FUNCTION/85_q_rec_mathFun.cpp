// To compute F(x,y) using recursion where F(x,y) = F(x-y,y) + 1 if y <= x And F(x,y) = 0 if x < y.

#include <iostream>
using namespace std;
int F(int, int);
int main()
{
    int x, y, res;
    cout << "Enter value of x and y = ";
    cin >> x >> y;
    res = F(x, y);
    cout << "F(x,y) = " << res;
}
int F(int x, int y)
{
    if (x < y)
        return 0;
    return (F(x - y, y) + 1);
}