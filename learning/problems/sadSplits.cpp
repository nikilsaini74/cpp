#include <iostream>
using namespace std;
int main()
{
    int x, t, arr[12], counter = 0, a, b, flag = 0;
    cin >> x;
    while (x > 0)
    {
        cin >> t;
        while (t > 10)
        {
            arr[counter] = t % 10;
            t /= 10;
            counter++;
        }
        arr[counter] = t;

        for (size_t i = 0; i <= counter; i++)
        {
            for (size_t j = i+1; j <= counter; j++)
            {
                
            }
            
        }
        
        if (t > 1)
        {

            cout << "YES\n";
        }
        if (flag == 0)
            cout << "NO\n";

        x--;
    }

    return 0;
}