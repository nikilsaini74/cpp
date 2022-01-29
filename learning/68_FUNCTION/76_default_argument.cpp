// To find simple interest. For senior citizen 12% rate of interest and for others 10%.

#include <iostream>
using namespace std;
float interest(float principle, int years, int r = 10);
int main()
{
    float p;
    int n;
    char senior_citizen;
    cout << "Enter the principle and number of years = ";
    cin >> p >> n;
    cout << "\nIs tha customer a senior citizen (y/n) = ";
    cin >> senior_citizen;
    if (senior_citizen == 'y')
        cout << "\n Interest = " << interest(p, n, 12);
    else
        cout << "\n Interest = " << interest(p, n);
}
float interest(float principle, int years, int r)
{
    return (principle * years * r / 100);
}
