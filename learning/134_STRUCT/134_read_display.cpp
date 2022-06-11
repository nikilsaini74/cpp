#include <iostream>
using namespace std;
int main()
{
    struct student
    {
        int roll_no;
        char name[20];
        float fees;
    };
    struct student stud1;
    cout << "Enter the roll number = ";
    cin >> stud1.roll_no;
    cout << "\n Enter the name = ";
    cin.ignore();
    cin.getline(stud1.name, 20);
    cout << "\n Enter fees = ";
    cin >> stud1.fees;
    cout << "\n STUDENT DETAILS" << endl;
    cout << stud1.roll_no << endl;
    cout << stud1.name << endl;
    cout << stud1.fees << endl;

    return 0;
}