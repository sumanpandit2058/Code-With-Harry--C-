#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a;
    int b;

    friend Complex sumOfComplex(Complex x, Complex y);

public:
    void getData(int n, int m)
    {
        a = n;
        b = m;
    }
    void print(void)
    {
        cout << "The complex number is " << a << "+" << b << "i" << endl;
    }
};
Complex sumOfComplex(Complex x, Complex y)
{
    Complex z;
     z.getData((x.a + y.a), (x.b + y.b));
     return z;
}
int main()
{
  
    Complex c1, c2, sum;
    c1.getData(1, 2);
    c2.getData(3, 4);
    c1.print();
    c2.print();
    sum = sumOfComplex(c1,c2);
    sum.print();
    return 0;
}