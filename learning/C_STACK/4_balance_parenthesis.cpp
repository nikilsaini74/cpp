// To check input parenthesis are balanced or not

#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

void check(stack<string> &st, string a)
{
    int i, j;
    for (i = 0; i < a.length(); i++)
    {
        string word = "";
        while (a[i] != '}' && a[i] != ']' && a[i] != ')' && i < a.length())
        {
            word += a[i];
            i++;
        }
        st.push(word);
    }
    for (int j = i; j < a.length(); j++)
    {
        if (a[j] == '}' && st.top() == '{')
        {
            st.pop();
        }
        else if (a[j] == ']' && st.top() == '[')
        {
            st.pop();
        }
        else if (a[j] == ')' && st.top() == '(')
        {
            st.pop();
        }
    }
}
return;
}

int main()
{
    stack<string> st;
    string a;
    cin >> a;
    cout << a;
    cout << a.length();
    check(st, a);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}