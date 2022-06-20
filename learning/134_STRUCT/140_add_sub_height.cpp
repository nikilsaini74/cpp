// To read, display, add, sub two height in inch and feet.

#include <iostream>
using namespace std;
struct HEIGHT
{
    int ft;
    int inch;
};
HEIGHT h1, h2;
HEIGHT add_height(HEIGHT *h1, HEIGHT *h2)
{
    HEIGHT sum;
    sum.ft = 0;
    sum.inch = h1->inch + h2->inch;
    if (sum.inch > 12)
    {
        sum.inch -= 12;
        sum.ft++;
    }
    sum.ft = h1->ft + h2->ft;
    cout << "\n"
         << sum.ft << " feet " << sum.inch << " inch ";
    return sum;
}
HEIGHT sub_height(HEIGHT *h1, HEIGHT *h2)
{
    HEIGHT sub;
    sub.ft = 0;
    sub.inch = 0;
    if (h1->ft > h2->ft)
    {
        if (h1->inch < h2->inch)
        {
            sub.inch += 12;
            sub.ft--;
        }
        sub.ft = h1->ft - h2->ft;
        sub.inch = h1->inch - h2->inch;
    }
    else
    {
        while (h2->inch < h1->inch)
        {
            sub.inch += 12;
            sub.ft--;
        }
        sub.ft = h2->ft - h1->ft;
        sub.inch = h2->inch - h1->inch;
    }
    cout << "\n"
         << sub.ft << " feet " << sub.inch << " inch ";
    return sub;
}

int main()
{
    cout << "\n Enter first height in feet and inch = ";
    cin >> h1.ft >> h1.inch;
    cout << "\n Enter second height in feet and inch = ";
    cin >> h2.ft >> h2.inch;
    cout << "\n First height = " << h1.ft << " feet " << h1.inch << " inch ";
    cout << "\n Second height = " << h2.ft << " feet " << h2.inch << " inch ";
    add_height(&h1, &h2);
    sub_height(&h1, &h2);

    return 0;
}