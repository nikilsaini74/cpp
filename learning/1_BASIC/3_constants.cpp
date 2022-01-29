#include <iostream>
using namespace std;
int main()
{
    const long double pi = 3.141592654L;
    const int a = 1234U;
    #define tax 0.123;
    cout.precision(10);

    cout <<"the value of pi is: "<<pi;
    cout <<"\nthe value of a is: "<<a;
    cout <<"\nthe tax is: "<<tax;
    
    return 0;
}