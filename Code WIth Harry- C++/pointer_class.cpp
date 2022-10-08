#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a;
    int b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void print(void)
    {
        cout << "The complex part is " << a << endl;
        cout << "The imaginary part is " << b << endl;
    }
};
int main()
{
    Complex C;
    Complex *ptr = &C;
    ptr->setData(1, 2);
    ptr->print();
    Complex *ptr1 = new Complex[3];
    ptr1->setData(3, 4);
    ptr1->print();
    (ptr1 +1)->setData(5,6);
    (ptr1 +1)->print();
    return 0;
}