#include <iostream>
using namespace std;
int main()
{
    int num, *pnum;
    pnum = &num;
    cout << " Enter the number = ";
    cin >> num;
    cout << "\n The number that was entered is : " << *pnum;
    cout << "\n The address of number in memory is : " << &num;

    return 0;
}                                                                                                                                                                      