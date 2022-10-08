#include <bits/stdc++.h>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void getId(void)
    {
        cout << "Enter the ID " << endl;
        cin >> id;
        count++;
    }
    void display(void)
    {
        cout << "The ID for the employee " << id << " is " << count << endl;
    }
    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};
int employee ::count;
int main()
{
    employee a, b, c;

    a.getId();
    a.display();
    employee::getCount();
    b.getId();
    b.display();
    employee::getCount();
    c.getId();
    c.display();
    employee::getCount();
}