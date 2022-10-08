#include <bits/stdc++.h>
using namespace std;
class Simple
{
    float a;
    float b;

public:
    void get_data(int, int);
    void print(void);
};
void Simple ::get_data(int x, int y)
{
    a = x;
    b = y;
}
void Simple ::print(void)
{
    int set;
    cout << "Enter the operation you want to perform" << endl;
    cout << "1.+, 2.*, 3./, 4.- " << endl;
    cin >> set;
    if (set == 1)
    {
        cout << "The addition of given two numbers are " << a + b << endl;
    }
    else if (set == 2)
    {
        cout << "The Multiplication of given two numbers are " << a * b << endl;
    }
    else if (set == 3)
    {
        cout << "The Division of given two numbers are " << (a / b) << endl;
    }
    else if (set == 4)
    {
        cout << "The Subtraction of given two numbers are " << a - b << endl;
    }
}
class Scientific : public Simple
{
    double a;

public:
    void Get_Data(double);
    void Display()
    {
        int a, b;
        cout << "Enter the value of a and b" << endl;
        cin >> a >> b;
        get_data(a,b);
        double put;
        cout << "Enter the operation you want to perform" << endl;
        cout << "1.Cos 2.Sin" << endl;
        cin >> put;
        if (put == 1)
        {
            cout << "The value of Cos(" << put << ")" << cos(put) << endl;
        }
        else if (put == 2)
        {
            cout << "The value of sin(" << put << ")" << sin(put) << endl;
        }
        print();
    }
};
void Scientific ::Get_Data(double x)
{
    a = x;
}

int main()
{
   double x;
   Scientific S;
   cout<<"Enter the Data for Cos Sin implementation"<<endl;
   cin>>x;
   S.Get_Data(x);
   S.Display();
    
    return 0;
}