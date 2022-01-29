#include <iostream>

using namespace std;
int main()
{
    char name[20];
    cout << "enter name : ";
    cin.getline(name, 20);

    cout << "\n welcome " << name;

    return 0;
}