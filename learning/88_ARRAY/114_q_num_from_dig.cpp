// enter five single digit array and form a number using array elements

#include <iostream>
using namespace std;
int main()
{
    int arr[5], num = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        num = (num * 10) + arr[i];
    }
    cout << num;
    return 0;
}