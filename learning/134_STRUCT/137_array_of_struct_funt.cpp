// passing array of structures to a function

#include <iostream>
using namespace std;
struct Employee
{
    int emp_ID;
    char name[10];
    float salary;
};
void read_data(Employee e[]) // array of struct
{
    for (int i = 0; i < 3; i++)
    {
        cout << "\nEnter employee ID = ";
        cin >> e[i].emp_ID;
        cout << "\nEnter name = ";
        cin.ignore();
        cin.getline(e[i].name, 20);
        cout << "\nEnter float = ";
        cin >> e[i].salary;
    }
}
void display(Employee e[])
{
    for (int i = 0; i < 3; i++)
    {
        cout << e[i].emp_ID << endl;
        cout << e[i].name << endl;
        cout << e[i].salary << endl;
    }
}
int main()
{
    Employee e[3];
    read_data(e);
    display(e);

    return 0;
}