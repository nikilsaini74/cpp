// passing a pointer to a function

#include <iostream>
using namespace std;
int add(int a, int b)
{
    return (a + b);
}
int sub(int a, int b)
{
    return (a - b);
}
int operate(int (*operate_fp)(int, int), int a, int b)
{
    int result;
    result = (*operate_fp)(a, b);
    return result;
}

int main()
{
    int result;
    result = operate(add, 9, 7);
    cout << "\n Addition = " << result;
    result = operate(sub, 9, 7);
    cout << "\n Subtraction = " << result;

    return 0;
}