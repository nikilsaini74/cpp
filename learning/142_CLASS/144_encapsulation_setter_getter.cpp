#include <iostream>
#include <string>
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

    Employee employee1 = Employee();
    employee1.setAge(30);
    employee1.setName("Pagal");

    employee1.intro();

    Employee employee2 = Employee();
    employee2.intro();

     employee1.setAge(45);
     cout << employee1.getName() << " is " << employee1.getAge() << " years old";
    return 0;
}