#include <bits/stdc++.h>
using namespace std;
class lol
{
    int a, b;

public:
    lol(void);
    void print(void)
    {
        cout << "The complex number is " << a << "+" << b << "i" << endl;
    }
};
lol ::lol(void)
{
    a = 20;
    b = 30;
}
int main()
{
    lol l1;
    l1.print();
    return 0;
}