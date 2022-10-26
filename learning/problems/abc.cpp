#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    long num, a[num], sum = 0, avg = 0, cost = 0;
    cin >> num; // Reading input from STDIN
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < num; i++)
    {
        sum = sum + a[i];
    }
    avg = long(sum / num;
    for (int i = 0; i < num; i++)
    {
        cost = cost + abs((avg - a[i]));
    }
    cout << cost;
}