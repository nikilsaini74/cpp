#include <iostream>
using namespace std;
#define A_w 30
#define S_w 20
#define E_w 50
#define A_t 60
#define S_t 50
#define E_t 200

int main()
{

    int e1, e2, a1, a2, a3, s;
    float eo, ao, total_p, e_p, a_p, s_p;

    cout << "Enter score obtained in two exams(out of 100) = ";
    cin >> e1 >> e2;

    cout << "\nEnter score obtained in three activities(out of 20) = ";
    cin >> a1 >> a2 >> a3;

    cout << "\nEnter score obtained in sport(out of 50) = ";
    cin >> s;

    eo = e1 + e2;
    ao = a1 + a2 + a3;
    e_p = float(eo * E_w / E_t);
    a_p = float(ao * A_w / A_t);
    s_p = float(s * S_w / S_t);

    total_p = e_p + a_p + s_p;

    cout << "\n*********************RESULT**********************";
    cout << "\nTotal percent in exams = " << e_p;
    cout << "\nTotal percent in activities = " << a_p;
    cout << "\nTotal percent in sports = " << s_p;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\nTOTAL PERCENT = " << total_p << " %";

    return 0;
}