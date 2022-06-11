#include <iostream>
using namespace std;
int main()
{
    int n, i = 0, x;
    char ch = 'A';
    cout << "\n ENter no. of rows = ";
    cin >> n;
    cout << "\n Enter no. of columns = ";
    cin >> x;
    while (i < n)
    {
        //ch = 'A';
        for (int j = 0; j < x; j++)
        {
            cout << ch++ << " ";
        }
        cout << "\n";
        i++;
    }

    return 0;
}