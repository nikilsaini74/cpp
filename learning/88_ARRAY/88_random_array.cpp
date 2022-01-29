// To read and display n random numbers using array.

#include <iostream>
#include <time.h>
#define MAX 10
using namespace std;

int main()
{
    int arr[MAX], i, RandNo;
    srand(time(0)); // srand is used for different set of random numbers every time.And it is used out of the loop.

    for (i = 0; i < MAX; i++)
    {
        RandNo = (rand()) % MAX;
        arr[i] = RandNo;
    }
    cout << "\n The contents of the array are : ";
    for (i = 0; i < MAX; i++)
        cout << "\t" << arr[i];
    return 0;
}