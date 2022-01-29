#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int &ref = n;


    cout << ref << endl;
    cout << n;

    return 0;
}
