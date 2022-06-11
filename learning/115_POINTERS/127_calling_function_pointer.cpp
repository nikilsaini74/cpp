#include <iostream>
using namespace std;
float (*func)(float, float); // Define a function pointer
float add(float x, float y)
{
    return (x + y);
}
float sub(float x, float y)
{
    return (x - y);
}
int main()
{
    func = add; // function pointer points to add
    cout << "\n Addition result : " << func(3.2, 4.5);
    func = sub; // function pointer points to sub
    cout << "\n Subtraction result : " << func(3.2, 4.5);

    return 0;
}