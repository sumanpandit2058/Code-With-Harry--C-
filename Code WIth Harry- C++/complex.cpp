#include <bits/stdc++.h>
using namespace std;
class complex1
{
    int a;
    int b;

public:
    void getData(int x, int y)
    {
        a = x;
        b = y;
    }
    void sumOfData(complex1 q, complex1 w)
    {
        a = q.a + q.a;
        b = w.b + w.b;
    }
    void print()
    {
        cout << "The complex number is " << a <<"+" << b<<"i"<< endl;
    }
};
int main()
{
    complex1 c1, c2, c3;
    c1.getData(1,2);
    c1.print();
    c2.getData(3,4);
    c2.print();
    c3.sumOfData(c1,c2);
    c3.print();

   
    return 0;
}