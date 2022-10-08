#include <bits/stdc++.h>
using namespace std;
class Complex;
class calculator
{
    int a;
    int b;

public:
    void dum(int q, int w)
    {
        a = q;
        b = w;
    }
    int sum(Complex);
    int sumData(Complex);
};
class Complex
{
    int x;
    int y;
    friend class calculator;

public:
    void pon(int r, int t)
    {
        x = r;
        y = t;
    }
};
int calculator ::sum(Complex o1)
{
    calculator c;
    return (o1.x + c.a);
}
int calculator ::sumData(Complex v)
{
    calculator c;
    return (v.y + c.b);
}

int main()
{
    Complex c1, c2;
    calculator d1, d2, d3;
    c1.pon(2, 3);
    d1.dum(5, 6);
    int one = d2.sum(c1);
    int two = d3.sumData(c1);
    cout << "Adding the first data " << one << endl;
    cout << "Adding the second data " << two << endl;
    return 0;
}