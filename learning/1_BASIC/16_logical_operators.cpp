#include <iostream>
using namespace std;
int main()
{
    int a = 6, b = 9, AND, OR;
    AND = (a < 8) && (b > 2);
    OR = (a < 2) || (b > 12);

    cout << AND << endl;
    cout << OR << endl;
    cout << !OR;

    return 0;
}