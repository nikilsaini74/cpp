#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0, count = 0;
    float avg;
    cout << "Enter any number. Enter 0 to STOP.";
    cin >> num;
    while (num != 0)
    {
        count++;
        sum = sum + num;
        cout << "\nEnter any number. Enter 0 to STOP.";
        cin >> num;
    }
    avg = (float)sum / count;
    cout << "\n SUM = " << sum << "\t AVERAGE = " << avg;
    return 0;
}
