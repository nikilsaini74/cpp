// sum of squares of elements.

#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;
int main()
{
    int arr[20], n, sum;
    srand(time(0));
    cout << "Enter the number of elements = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        arr[i] = (rand()) % 10;
    }
    for (int i = 0; i < n; i++)
    {
        // int sum;
        sum += pow(arr[i], 2);
    }
    cout << "\nSUM of squares = " << sum;

    return 0;
}