#include <iostream>
using namespace std;
int main()
{
    char ch;
    float sal, bonus, total;
    cout << "Enter the gender of the employee (m or f) : ";
    cin >> ch;
    cout << "\nEnter the salary of the employee = ";
    cin >> sal;

    if (ch == 'm')
        bonus = 0.05 * sal;
    else
        bonus = 0.1 * sal;
    if (sal < 10000)
        bonus += 0.02 * sal;

    total = sal + bonus;

    cout << "\nSalary = " << sal;
    cout << "\nBonus = " << bonus;
    cout << "\nTotal salary = " << total;

    return 0;
}