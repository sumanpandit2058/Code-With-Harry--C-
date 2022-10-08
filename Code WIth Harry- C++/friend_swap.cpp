#include <bits/stdc++.h>
using namespace std;
class c2;
class c1
{
    int value;

public:
    void get(int data)
    {
        value = data;
    }
    void display(void)
    {
        cout << "The value of class c1 is " << value << endl;
    }
    friend void swap(c1 &, c2 &);
};
class c2
{
    int num;

public:
    void set(int info)
    {
        num = info;
    }
    void display(void)
    {
        cout << "The value of class c2 is " << num << endl;
    }
    friend void swap(c1 &, c2 &);
};
void swap(c1 &x, c2 &y)
{
    int temp;
    temp = x.value;
    x.value = y.num;
    y.num = temp;
}
int main()
{
    c1 a;
    c2 b;
    a.get(5);
    b.set(10);
    swap(a,b);
    a.display();
    b.display();

    return 0;
}