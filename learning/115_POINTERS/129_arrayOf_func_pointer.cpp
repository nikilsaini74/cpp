// array of function pointer

#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div1(int a, int b)
{
    if (b)
        return a / b;
    else
        return 0;
}
int (*fp[4])(int a, int b);

int main()
{
    int result;
    int num1, num2, op;
    fp[0] = add;
    fp[1] = sub;
    fp[2] = mul;
    fp[3] = div1;
    cout << "\n Enter the numbers : ";
    cin >> num1 >> num2;
    do
    {
        cout << "\n 0. Add \n 1. Sub \n 2. Multiply \n 3. Divide \n 4. Exit\n";
        cout << " Enter the operation : ";
        cin >> op;
        result = (*fp[op])(num1, num2);
        cout << "\n Result : " << result;
    } while (op != 4);
    return 0;

    return 0;
}