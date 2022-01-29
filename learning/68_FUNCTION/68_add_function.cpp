#include <iostream>
using namespace std;
int sum(int a, int b); //FUNCTION DECLARATION or PROTOTYPE
int main()
{
    int num1, num2, total = 0;
    cout << "Enter two numbers for addition = ";
    cin >> num1 >> num2;
    total = sum(num1, num2); //FUNCTION CALL
    cout << "\nTOTAL = " << total;
}
//FUNCTION DEFINITION

int sum(int a, int b) //FUNCTION HEADER do not have semicolon
{
    //FUNCTION BODY
    int result;
    result = a + b;
    return result;
}