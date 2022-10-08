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
class Derived : public Base
{
public:
    int data3()
    {
        int data5;
        data5 = data2 * getData();
        return data5;
    }
    void display(void)
    {
        cout << "The value of data1 is " << getData() << endl;
        cout << "The value of data2 is " << data2 << endl;
        cout << "The value of data3 is " << data3() << endl;
    }
};

int main()
{
    Derived D;
    D.setData();
    D.getData();
    D.GetData();
    D.display();


    return 0;
}