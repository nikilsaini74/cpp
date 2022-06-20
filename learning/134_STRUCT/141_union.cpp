#include <iostream>
using namespace std;
struct student
{
    union
    {
        char name[20];
        int roll;
        //    int a;
    };
    int marks;
};
main()
{
    struct student stud;
    // struct student stud1;

    cout << "\n Enter rollno,name and fees = ";
    cin >> stud.roll;
    // cin.ignore();
    // cin.getline(stud.name, 20);
    cin >> stud.marks;
    // cin >> stud1.roll;
    // cin >> stud1.name;
    //  cin >> stud.a;
    cout << stud.roll << endl;
    //  cout << stud.name << endl;
    cout << stud.marks << endl;
    // cout << stud1.roll << endl;
    // cout << stud1.name << endl;

    // cout << stud.a;
}