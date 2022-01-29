// Largest of three using functions

#include <iostream>
using namespace std;
int larger(int a, int b, int c); // FUNCTION DECLARATION
int main()
{
    int num1, num2, num3, large;
    cout << "\n Enter three numbers : ";
    cin >> num1 >> num2 >> num3;
    large = larger(num1, num2, num3); // FUNCTION CALL
    cout << "\n LARGEST NUMBER = " << large;
}
int larger(int a, int b, int c) // FUNCTION HEADER
{
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}
