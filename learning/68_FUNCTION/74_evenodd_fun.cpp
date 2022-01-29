#include <iostream>
using namespace std;
int evenodd(int a);
int main()
{
    int num, flag;
    cout << "Enter the number : ";
    cin >> num;
    flag = evenodd(num);
    if (flag == 1)
        cout << "\n"
             << num << " is EVEN";
    else
        cout << "\n"
             << num << " is ODD";
}
int evenodd(int a)
{
    if (a % 2 == 0)
        return 1;
    else
        return 0;
}
