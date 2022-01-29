// dividing into groups and finding frequency.

#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int marks[50], randNo, group[11] = {0};
    srand(time(0));
    for (int i = 0; i < 50; i++)
    {
        randNo = rand() % 101;
        marks[i] = randNo;
        cout << marks[i] << "\t";
    }

    for (int j = 0; j < 50; j++)
    {
        int range;
        range = marks[j] / 10;
        group[range]++;
    }
    cout << "\n *********************************";
    cout << "\n GROUP \t FREQUENCY \n";
    for (int k = 0; k < 11; k++)
    {
        cout << k << " \t" << group[k] << "\t";
        for (int m = 0; m < group[k]; m++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}