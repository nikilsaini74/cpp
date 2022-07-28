#include <iostream>
using namespace std;

class Employee // class
{
public:
    string Name;
    string Company;
    int Age;

    void intro() // function
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    Employee(string name, string company, int age) // constructor
    {
        Name = name;
        Company = company;
        Age = age;
    }
};
int main()
{
    Employee employee1 = Employee("Anjali", "ABC", 18);
    employee1.intro();

    Employee employee2 = Employee("Satyam", "XYZ", 20);
    employee2.intro();
    return 0;
}