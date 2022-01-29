#include <iostream>
using namespace std;
void reverse(int);
int main()
{
    int n, rev;
    cout << "Enter any number = ";
    cin >> n;
    reverse(n);
}
void reverse(int num)
{
    if (num == 0)
        return;
    cout << num % 10;
    reverse(num / 10);
}