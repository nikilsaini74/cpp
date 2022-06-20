// passing struct through pointer

#include <iostream>
using namespace std;
struct student
{
    int r_no;
    char name[20];
    float fees;
};

main()
{
    struct student *ptr;
    struct student stud1 = {1, "Anjali", 30000};
    struct student stud2 = {13, "Ai", 3876};

    ptr = &stud2;
    //ptr = &stud1;
    cout << "\n STUDENTS DETAILS" << endl;
    cout << ptr->r_no << endl;
    cout << (*ptr).name << endl;
    cout << ptr->fees << endl;

    return 0;
}