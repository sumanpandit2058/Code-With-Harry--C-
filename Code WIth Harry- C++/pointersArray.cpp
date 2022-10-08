#include <bits/stdc++.h>
using namespace std;
class Shop
{
    int id;
    int price;
    public:
    void Set_data(int x, int y)
    {
        id = x;
        price = y;
    }
    void print(void)
    {
        cout << "The ID and price of item is " << id << " and " << price << endl;
    }
};

int main()
{
    Shop *ptr = new Shop[3];
    Shop *p=ptr;
    int x,v;
    for (int  i = 0; i < 3; i++)
    {
        cout<<"Enter the ID and price of item "<<i+1<<endl;
        cin>>x>>v;
        ptr->Set_data(x,v);
        ptr++;

    }
    for (int i = 0; i < 3; i++)
    {
        p->print();
        p++;
    }
    
    

    return 0;
}