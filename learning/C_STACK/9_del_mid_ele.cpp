// To delete mid element in stack

#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &st, int count, int size)
{
    if (count == size / 2)
    {
        st.pop();
        return;
    }
    int num = st.top();
    st.pop();
    solve(st, count + 1, size);
    st.push(num);
}

void del(stack<int> &st, int n)
{
    int count = 0;
    solve(st, count, n);
}

int main()
{
    stack<int> st;
    st.push(2);
    st.push(6);
    st.push(7);
    st.push(21);
    st.push(9);

    del(st, 5);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
        // cout << endl;
    }

    return 0;
}