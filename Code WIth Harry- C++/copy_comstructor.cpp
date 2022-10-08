#include <bits/stdc++.h>
using namespace std;
class Copy
{
    int a;

public:
    Copy() {}
    Copy(int x)
    {
        a = x;
    }
    void print(void)
    {
        cout << "The value of a is " << a << endl;
    }
    // Copy(Copy &object)
    // {
    //     a = object.a;
    // }
};

int main()
{
    Copy c1(9), c2(3);
    c1.print();
    c2.print();
    Copy c3(c1);
    c3.print();
    Copy c4 = c2;
    c4.print();
    return 0;
}