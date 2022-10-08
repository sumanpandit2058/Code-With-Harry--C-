#include <bits/stdc++.h>
using namespace std;
class Student
{
protected:
    int roll;

public:
    void set_roll(int rol)
    {
        roll = rol;
    }
    void Print(void)
    {
        cout << "Tour Roll number is " << roll << endl;
    }
};
class Test : virtual public Student
{
protected:
    float math, physics;

public:
    void set_marks(float x, float y)
    {
        math = x;
        physics = y;
    }
    void Display(void)
    {
        cout << "Your marks is " << endl
             << "Math: " << math << endl
             << "Physics: " << physics << endl;
    }
};
class Sports : virtual public Student
{
protected:
    int score;

public:
    void set_score(int x)
    {
        score = x;
    }
    void show(void)
    {
        cout << "Your score in Sports is " << score << endl;
    }
};
class Result : public Test, public Sports
{
public:
    void view(void)
    {
        float Total;
        Total = math + physics + score;
        Print();
        Display();
        show();
        cout << "Your Total score is " << Total << endl;
    }
};
int main()
{
    Result Suman;
    Suman.set_roll(21053465);
    Suman.set_marks(91.6, 97.5);
    Suman.set_score(90);
    Suman.view();

    return 0;
}