#include <iostream>
using namespace std;
int add(int n);
void add1(int v);
int main()
{
    int num = 5, a = 2;
    cout << "The value of num before calling function = " << num;
    num = add(num);
    cout << "\nThe value of num after calling function = " << num; //Changes will be made due to return statement

    cout << "\nThe value of a before calling function = " << a;
    add1(a);
    cout << "\nThe value of a after calling function = " << a; //No change will be made as called function uses a copy of the actual arguments.Changes were made to the copy not on the actual variables
}
int add(int n)
{
    n = n + 10;
    cout << "\nThe value of num in called function = " << n;
    return n;
}
void add1(int v)
{
    v = v + 10;
    cout << "\nThe value of a in called function = " << v;
}