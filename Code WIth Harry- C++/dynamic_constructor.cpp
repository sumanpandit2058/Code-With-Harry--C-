#include <bits/stdc++.h>
using namespace std;
class compound
{
    int principle;
    int years;
    float interest;
    float returnValue;

public:
    compound(){};
    compound(int, int, float);
    compound(int, int, int);
    void show();
};
compound ::compound(int p, int y, float r)
{
    principle = p;
    years = y;
    interest = r;
    returnValue = p;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interest);
    }
}
compound::compound(int P, int Y, int R)
{
    principle = P;
    years = Y;
    interest = float(R)/100;
    returnValue = P;
    for (int i = 0; i < Y; i++)
    {
        returnValue = returnValue * (1 + interest);
    }
}
void compound ::show()
{
    cout << "Your return value will be " << returnValue << endl;
}
int main()
{
    int p, y;
    float r;
    cout << "Enter the value of p, y, r" << endl;
    cin >> p >> y >> r;
    compound c1, c2, c3;
    c1 = compound(p, y, r);
    c1.show();
    int P, Y, R;
    cout << "Enter the value of p, y, R" << endl;
    cin >> P >> Y >> R;
    c2 = compound(P, Y, R);
    c2.show();
    return 0;
}