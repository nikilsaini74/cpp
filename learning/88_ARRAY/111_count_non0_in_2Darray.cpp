// Count the total number of non zero elements in two dimensional array

#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int arr[20][20], randNo, n;
    srand(time(0));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {  
            randNo = (rand()) % 100;
            arr[i][j] = randNo;

            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            if (arr[i][j] != 0)
                n++;
        }
    }
    cout << "\n Total number of non zero elements = " << n;

    return 0;
}