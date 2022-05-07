#include <iostream>
using namespace std;

class Employee // class
{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name) // setter
    {
        Name = name;
    }
    string getName() // getter
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        if (age >= 18)
            Age = age;
    }
    int getAge()
    {
        return Age;
    }
    void intro()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
};
int main()
{
    Employee employee1 = Employee("Anjali", "ABC", 18);
    employee1.intro();

    Employee employee2 = Employee("Satyam", "XYZ", 20);
    employee2.intro();

    employee1.setAge(12);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old";
    return 0;
}