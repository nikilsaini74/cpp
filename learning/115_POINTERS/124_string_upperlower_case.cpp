// To read a string and find the number of upper and lower case characters entered

#include <iostream>
using namespace std;
int main()
{
    char str[100], *pstr = str;
    int upper = 0, lower = 0;
    cout << "\n Enter the string = ";
    cin.getline(str, 100);
    while (*pstr != '\0')
    {
        if (*pstr >= 'A' && *pstr <= 'Z')
            upper++;
        else if (*pstr >= 'a' && *pstr <= 'z')
            lower++;
        pstr++;
    }
    cout << "\n Upper case characters = " << upper;
    cout << "\n Lower case characters = " << lower;

    return 0;
}