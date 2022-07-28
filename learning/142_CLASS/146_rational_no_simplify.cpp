// to enter a rational number, simplify and display

#include <iostream>
using namespace std;
class Fraction
{
private:
    int num;
    int deno;
    void simplify();
    int GCD(int a, int b);

public:
    void get_data()
    {
        cout << "\nEnter numerator = ";
        cin >> num;
        cout << "\nEnter denominator = ";
        cin >> deno;
        if (deno == 0)
        {
            cout << "\nFraction not possible";
            exit(1);
        }
    }
    void display_data()
    {
        simplify();
        cout << num << " / " << deno;
    }
};
void Fraction ::simplify(void)
{
    cout << "\nSimplified fraction is = ";
    int common_div = GCD(num, deno);
    num = num / common_div;
    deno = deno / common_div;
}
int Fraction ::GCD(int a, int b)
{
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}
int main()
{
    Fraction f;
    f.get_data();
    f.display_data();

    return 0;
}