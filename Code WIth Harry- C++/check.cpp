#include <bits/stdc++.h>
using namespace std;
class pandit
{
private:
    string s;

public:
    void binary(void);
    void check_binary(void);
    void one_compliment(void);
    void display(void);
};
void pandit ::binary(void)
{
    cout << "Enter the number in binary " << endl;
    cin >> s;
}
void pandit ::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "Its is a invalid number " << endl;
            exit(0);
        }
    }
}
void pandit ::one_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}
void pandit ::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    pandit p;
    p.binary();
    p.check_binary();
    p.display();
    p.one_compliment();
    cout << "Ones compliment of the binary" << endl;
    p.display();

    return 0;
}