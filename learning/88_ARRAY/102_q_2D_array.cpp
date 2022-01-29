// To read marks of 10 students in 5 subjects AND display highest marks in subject.

#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int marks[10][5], i, j, max_marks, randNo;
    srand(time(0));
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            randNo = (rand()) % 100;
            marks[i][j] = randNo;

            cout << marks[i][j] << "\t";
        }
        cout << "\n";
    }

    for (j = 0; j < 5; j++)
    {
        max_marks = INT64_MIN;
        for (i = 0; i < 10; i++)
        {
            if (marks[i][j] > max_marks)
                max_marks = marks[i][j];
        }
        cout << "\n The highest marks in the subject " << j << " = " << max_marks;
    }
    return 0;
}