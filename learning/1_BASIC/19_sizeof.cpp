#include <iostream>
using namespace std;
int main()
{
    char name[50];
    cout << "enter name : ";
    cin.getline(name, 20);
    cout << sizeof(name) << endl;
    cout << sizeof(int);

    return 0;
}