// To sort a stack

#include <iostream>
#include <stack>
using namespace std;

void sorted(stack<int> &st, int num)
{
    if (st.empty() || st.top() < num)
    {
        st.push(num);
        return;
    }
    int x = st.top();
    st.pop();
    sorted(st, num);
    st.push(x);
}

void sortStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int num = st.top();
    st.pop();
    sortStack(st);
    sorted(st, num);
}

int main()
{
    stack<int> st;
    st.push(2);
    st.push(6);
    st.push(7);
    st.push(-21);
    st.push(9);

    sortStack(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
        // cout << endl;
    }

    return 0;
}