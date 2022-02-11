// read 100 integers and display all pairs of elements whose sum is 50.

#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int arr[100];
    srand(time(0));
    for (int i = 0; i < 100; i++)
    {
        arr[i] = (rand()) % 100;
    }
    for (int i = 0; i < 100; i++)
    {
        for (int j = i + 1; j < 100; j++)
        {
            if (arr[i] + arr[j] == 50)
            {
                cout << arr[i] << " + " << arr[j] << " = 50";
                cout << "\n";
            }
        }
    }

    return 0;
}