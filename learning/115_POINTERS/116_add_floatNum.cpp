// to add two floating point numbers using pointers

#include <iostream>
using namespace std;
int main()
{
    float num1, num2, sum = 0.0;
    float *pnum1 = &num1, *pnum2 = &num2, *psum = &sum;
    cout << " Enter two numbers = ";
    cin >> *pnum1 >> *pnum2;
    *psum = *pnum1 + *pnum2;
    cout << "\n " << *pnum1 << " + " << *pnum2 << " = " << *psum;

    return 0;
}