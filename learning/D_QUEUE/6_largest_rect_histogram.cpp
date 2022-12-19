#include <iostream>
#include <stack>
using namespace std;
int maxArea(int a[],int n)
{
  
    int i = 0;
    int ans = 0;
    stack<int> s;
    s.push(0);
    while (i < n)
    {
       //s.push(0);
        while (!s.empty() && a[s.top()] > a[i])
        {
            int t = s.top();
            int h = a[t];
            s.pop();
            if (s.empty())
            {
                ans = max(ans, h * i);
            }
            else
            {
                int len = i - s.top() - 1;
                ans = max(ans,len*h);
            }
        }
        s.push(i);
        i++;
    }
    return ans;
}

int main()
{
    int a[] = {6, 1, 5, 4, 5, 2, 6};
      int n = sizeof(a)/sizeof(a[0]);
    cout << maxArea(a,n);

    return 0;
}