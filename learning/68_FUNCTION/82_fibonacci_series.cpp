// Fibonacci series using recursion

#include <iostream>
using namespace std;
int Fib(int);
int main()
{
    int n;
    cout << "Enter the number of terms in the series = ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cout << "\n Fibonacci (" << i << ") = " << Fib(i);
}
int Fib(int num)
{
    if (num <= 2)
        return 1;
    else
        return Fib(num - 1) + Fib(num - 2);
}