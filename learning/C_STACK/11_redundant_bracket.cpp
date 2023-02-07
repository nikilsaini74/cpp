// To check redundant bracket in string like ((A+B)) it is a redundant bracket expression

#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool findRB(string &s)
{
    stack<char> st;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*')
        {
            st.push(s[i]);
        }
        else
        {

            if (s[i] == ')')
            {
                bool isRedundant = true;
                while (st.top() != '(')
                {
                    char top = st.top();
                    if (top == '+' || top == '-' || top == '/' || top == '*')
                    {
                        isRedundant = false;
                    }
                    st.pop();
                }
                if (isRedundant == true)
                    return true;
                st.pop();
            }
        }
    }
    return false;
}

int main()
{
    string a = {"(a+(a*b)+(b))"};
    // string a;
    // cin >> a;
    cout << findRB(a);

    return 0;
}