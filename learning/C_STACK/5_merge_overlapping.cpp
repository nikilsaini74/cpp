// input two time intervals and merge the overlapping ones

#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

struct interval
{
    int start, end;
};

bool compareIntervals(interval i1, interval i2)
{
    return (i1.start < i2.start);
}

void mergeIntervals(interval arr[], int n)
{
    if (n <= 0)
        return;
    stack<interval> s;
    sort(arr, arr + n, compareIntervals);

    s.push(arr[0]);
    for (int i = 1; i < n; i++)
    {
        interval top = s.top();
        if (arr[i].start > top.end)
        {
            s.push(arr[i]);
        }
        else if (top.end < arr[i].end)
        {
            top.end = arr[i].end;
            s.pop();
            s.push(top);
        }
    }
    while (!s.empty())
    {
        interval t = s.top();
        cout << "[" << t.start << " , " << t.end << "] ";
        s.pop();
    }
}

int main()
{
    interval arr[] = {{6, 8}, {1, 9}, {2, 4}, {4, 7}};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeIntervals(arr, n);

    return 0;
}