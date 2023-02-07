// Find the number of parenthesis changed to make a valid string like {{{{}} ans = 3

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int valid(string &s)
{
    if (s.length() % 2 == 1)
        return -1;
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '{')
            st.push(ch);
        else
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
    }
    int a = 0, b = 0;
    while (!st.empty())
    {
        if (st.top() == '}')
        {
            a++;
        }
        else
        {
            b++;
        }
        st.pop();
    }
    int ans = (a + 1) / 2 + (b + 1) / 2;
    return ans;
}

int main()
{
    string a = {"}}}{{{"};
    // string a;
    // cin >> a;
    cout << valid(a);

    return 0;
}