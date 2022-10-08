#include <bits/stdc++.h>
using namespace std;
class shop
{
    int id[100];
    int price[100];
    int count;

public:
    void setPrice(void);
    void displayPrice(void);
    void counter(void) { count = 0; }
};
void shop ::setPrice(void)
{
    cout << "Enter the id of object " << endl;
    cin >> id[count];
    cout << "Enter the price of object " << endl;
    cin >> price[count];
    count++;
}
void shop ::displayPrice(void)
{
    for (int i = 0; i < count; i++)
    {
        cout << "The ID and the price of the object is " << id[i] << " and " << price[i] << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number of objects " << endl;
    cin >> n;
    shop s;
    s.counter();
    for (int i = 0; i < n; i++)
    {
        s.setPrice();
    }

    s.displayPrice();
    return 0;
}