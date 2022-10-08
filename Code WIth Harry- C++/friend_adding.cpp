#include <bits/stdc++.h>
using namespace std;
class y;
class x
{
    int value;

public:
    void set(int data)
    {
        value = data;
    };
    friend void sum(x,y);
};
class y
{
    int num;

public:
    void get(int info)
    {
        num = info;
    }
    friend void sum(x,y);
};
void sum(x o1, y o2)
{
    cout << "After adding the value becomes " << o1.value + o2.num << endl;
}
int main()
{
    x a;
    y b;
    a.set(3);
    b.get(5);
    sum(a, b);
    return 0;
}