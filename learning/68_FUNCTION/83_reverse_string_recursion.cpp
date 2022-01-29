// reversing string using recursion.

#include <iostream>
#include <string>
using namespace std;
void reverse(string);
int main()
{
    char sentence[50];
    cout << "Enter any sentence : ";
    cin.getline(sentence, 50);
    reverse(sentence);
}

void reverse(string str)
{
    if (str.size() == 0)
    {
        return;
    }
    reverse(str.substr(1));
    cout << str[0];
}
