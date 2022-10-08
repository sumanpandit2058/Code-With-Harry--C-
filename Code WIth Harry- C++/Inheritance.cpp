#include <bits/stdc++.h>
using namespace std;
class pandit
{
private:
    int a, b;

public:
    int c, d;
    void useData(int x, int y);
    void displayData()
    {
        cout << "The value of s is " << a << endl;
        cout << "The value of s is " << b << endl;
        cout << "The value of s is " << c << endl;
        cout << "The value of s is " << d << endl;
    }
};
void pandit ::useData(int g, int h)
{
    a = g;
    b = h;
}
int main()
{
    pandit sum;
    sum.c = 5;
    sum.d = 6;
    sum.useData(1, 2);
    sum.displayData();
    return 0;
}