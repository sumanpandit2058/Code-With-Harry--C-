#include <bits/stdc++.h>
using namespace std;
class Demo
{
public:
    int a;
    int b;
    Demo(int x)
    {
        a = x;
        b = 56;
    }
   
    Demo(){}
};
class Try : public Demo
{
    public:
    int v;
    Try(int x)
    {
        a = x;
        v = 0;
    }
    void display(void)
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    Demo d1(3), d2(4);
    cout << d1.b << endl;
    cout << d2.b << endl;
    cout << d1.a << endl;
    cout << d2.a << endl;
    Try T(45);
    cout<<T.v<<endl;
    T.display();

    return 0;
}