// #include <bits/stdc++.h>
#include <iostream>
#include <deque>
using namespace std;

void printMax(int a[], int n, int k)
{
    deque<int> q;
    int i;
    for (i = 0; i < k; ++i)
    {
        while ((!q.empty()) && a[i] >= a[q.back()])
            q.pop_back();
        q.push_back(i);
    }

    for (; i <= n; ++i)
    {
        cout << a[q.front()] << " ";
     //   while (!q.empty() && q.front() <= i - k)
            q.pop_front();
        while (!q.empty() && a[i] >= a[q.back()])
            q.pop_back();
        q.push_back(i);
    }
    cout << a[q.front()] << " ";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 4;
    printMax(arr, 9, k);
    return 0;
}