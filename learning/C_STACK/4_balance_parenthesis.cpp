// To check input parenthesis are balanced or not

#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

bool check(string a)
{
    stack<char> st;
    int n = a.length();
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '{' or a[i] == '[' or a[i] == '(')
        {
            st.push(a[i]);
        }
        else if (a[i] == '}')
        {
            if (!st.empty() and st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (a[i] == ']')
        {
            if (!st.empty() and st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (a[i] == ')')
        {
            if (!st.empty() and st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }
    // if (!st.empty())
    //   return false;

    return ans;
}

int main()
{
    string a;
    cin >> a;
    if (check(a))
        cout << "Balanced Parenthesis";
    else
        cout << "Not Balanced";

    return 0;
}