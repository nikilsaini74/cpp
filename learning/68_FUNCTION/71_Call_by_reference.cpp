//Call by reference

#include <iostream>
using namespace std;
void add(int &n);
int main()
{
    int num = 2;
    cout << "\n The value of num before calling the function = " << num;
    add(num);
    cout << "\n The value of function after calling the function = " << num;
}
void add(int &n)
{
    n = n + 10;
    cout << "\n The value function in calling the function = " << n;
}