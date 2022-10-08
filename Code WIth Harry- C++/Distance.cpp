#include <bits/stdc++.h>
using namespace std;
class distance2;
class distance1
{
    int a, b;

public:
    distance1(int q, int w)
    {
        a = q;
        b = w;
    }
    friend int distance3(distance1 o1, distance2 o2);
    friend int distance4(distance1 o3, distance2 o4);
};
class distance2
{
    int x, y;

public:
    distance2(int s, int d)
    {
        x = s;
        y = d;
    }
    friend int distance3(distance1 o1, distance2 o2);
    friend int distance4(distance1 o3, distance2 o4);
};
int distance3(distance1 o1, distance2 o2)
{
    int first;
    first = pow(o1.a - o2.x, 2);
    return first;
}
int distance4(distance1 o3, distance2 o4)
{
    int second;
    second = pow(o3.b - o4.y, 2);
    return second;
}

int main()
{
    distance1 D(2,3);
    distance2 V(5,6);
    int third;
    third= distance3(D,V) + distance4(D,V);
    float fourth;
    fourth = sqrt(third);
    cout<<"The distance between those points are "<<fourth<<endl;

    return 0;
}