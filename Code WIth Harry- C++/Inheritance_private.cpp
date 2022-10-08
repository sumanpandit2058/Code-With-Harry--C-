#include <bits/stdc++.h>
using namespace std;
class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getData();
    int GetData();
};
void Base ::setData()
{
    data1 = 10;
    data2 = 20;
};
int Base ::getData()
{
    return data1;
}
int Base ::GetData()
{
    return data2;
}
class Derived : private Base
{
public:
    int data3;
    void Hug();
    void Display();
};
void Derived ::Hug()
{
    setData();
    data3 = data2 * getData();
}
void Derived ::Display()
{
    cout << "The value of data1 is " << getData() << endl;
    cout << "The value of data2 is " << data2 << endl;
    cout << "The value of data3 is " << data3 << endl;
}

int main()
{
    Derived D;
    // D.setData();
    D.Hug();
    D.Display();

    return 0;
}