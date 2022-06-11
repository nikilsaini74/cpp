#include <iostream>
using namespace std;
int main()
{
    struct NAME
    {
        char first_name[20];
        char last_name[20];
    };
    struct student
    {
        int roll_no;
        struct NAME name;
        float fees;
    };
    student stud1;
    cout << "\n ENter roll no = ";
    cin >> stud1.roll_no;
    cout << "\n Enter name = ";
    cin.ignore();
    cin.getline(stud1.name.first_name, 20);
    cin.ignore();
    cin.getline(stud1.name.last_name, 20);
    cout << "\n Enter fees = ";
    cin >> stud1.fees;
    cout << "\n STUDENT'S DETAILS" << endl;
    cout << stud1.roll_no << endl;
    cout << stud1.name.first_name << " " << stud1.name.last_name << endl;
    cout << stud1.fees;

    return 0;
}