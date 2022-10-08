#include <bits/stdc++.h>
using namespace std;
class Complex;
class calculator
{
public:
    int sum(int a, int b)
    {
        return (a + b);
    }
    int sumData(Complex, Complex);
};
class Complex
{
    int a;
    int b;
    friend int calculator ::sumData(Complex, Complex);

public:
    void getData(int x, int y)
    {
        a = x;
        b = y;
    }
    void print(void)
    {
        cout << "The complex number is " << a << "+" << b << "i" << endl;
    }
};
int calculator ::sumData(Complex o1, Complex o2)
{

    return (o1.a + o2.a);
}


int main()
{
    Complex c1, c2, sum;
    c1.getData(1, 2);
    c2.getData(3, 4);
    c1.print();
    c2.print();
    calculator calc;
    int rev= calc.sumData(c1, c2);
    int res = calc.sumData(c1, c2);
    cout<<"The complex number is "<<rev<<"+"<<res<<"i";

    return 0;
}