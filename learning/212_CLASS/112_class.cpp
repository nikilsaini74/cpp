// basic class and objects

#include <iostream>
#include <list>
using namespace std;
class info
{
public:
    string name;
    string branch;
    int rollNo;
    list<string> subjects;
};
int main()
{
    info in;
    in.name = "Anjali";
    in.branch = "CEDS";
    in.rollNo = 21009;
    in.subjects = {"Maths", "Chemistry", "English", "Physics"};

    cout << "Name = " << in.name << endl;
    cout << "Branch = " << in.branch << endl;
    cout << "Roll Number = " << in.rollNo << endl;
    cout << "Subjects :" << endl;
    for (string sub : in.subjects)
    {
        cout << sub << endl;
    }

    return 0;
}