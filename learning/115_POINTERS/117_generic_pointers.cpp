// generic pointer = void

#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    char ch = 'A';
    void *gp;
    gp = &x;
    cout << " Generic pointer to the integer value = " << *(int *)gp;
    gp = &ch;
    cout << " \nGeneric pointer to the character value = " << *(char *)gp;

    return 0;
}