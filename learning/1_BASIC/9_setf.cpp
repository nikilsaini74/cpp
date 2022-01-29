#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{
    int num;
    cout<<"\n enter the number : ";
    cin>>num;

    cout<<"\n hexadecimal of "<<num;
    cout<<setw(10)<<setfill('*')<<hex<<num;

    cout<<"\n octal of "<<dec<<num;
    cout<<setw(20)<<setfill('*')<<oct<<num;
    
    cout<<"\n square root of "<<dec<<num;
    cout.setf(ios::showpoint | ios::showpos);
    cout<<setw(20)<<setfill('*')<<setprecision(3)<<dec<<sqrt(num);
    
    return 0;
}