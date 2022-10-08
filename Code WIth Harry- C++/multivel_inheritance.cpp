#include <bits/stdc++.h>
using namespace std;
class student
{
protected:
    int roll;

public:
    void set_roll(int);
    void get_roll(void);
};
void student ::set_roll(int a)
{
    roll = a;
}
void student ::get_roll()
{
    cout << "Your Roll number is " << roll << endl;
}
class marks : public student
{
protected:
    int math;
    int physics;
    int chem;
    int bio;

public:
    void set_marks(int, int, int, int);
    void get_marks(void);
};
void marks ::set_marks(int x, int y, int v, int z)
{
    math = x;
    physics = y;
    chem = v;
    bio = z;
}
void marks ::get_marks()
{
    cout << "Your marks in math is " << math << endl;
    cout << "Your marks in Physics is " << physics << endl;
    cout << "Your marks in Chemistry is " << chem << endl;
    cout << "Your marks in Biology is " << bio << endl;
}
class Result : public marks
{
public:
    void Display(void)
    {
        get_roll();
        get_marks();
        float percent;
        percent = ((math + physics + chem + bio) / 4);

        cout << "Your Result is " << percent << endl;
    }
};
int main()
{
    Result pandit;
    pandit.set_roll(21053465);
    pandit.set_marks(94, 96, 97, 98);
    pandit.Display();

    return 0;
}