#include <iostream>
using namespace std;
int main()
{
    #define PI 3.1459

    cout.precision(3);
    cout.width(8);
    cout.fill('$');

    cout<<PI;
    
    return 0;
}