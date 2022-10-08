#include <bits/stdc++.h>
using namespace std;
class Base{
    protected: 
    string s;
    float  rating;
    public:
    Base(string s , float  r){
        this->s = s;
        rating =r;
    }
     virtual void Display()=0;
};
class Derived1 : public Base{
    protected:
    int vidLength;
    public:
    Derived1(string q, float w, int e):Base(q,w){
        vidLength=e;
    }
    void Display(){
        cout<<"The name is "<<s<<endl;
        cout <<"The Rating is " <<rating<<endl;
        cout <<"The video length is "<<vidLength<<" minutes"<<endl;
    }
};
class Derived2 : public Base{
    protected:
    int words;
    public:
    Derived2(string q, float w, int e): Base (q,w){
        words =e;
    }
    void Display(){
        cout<<"The name is "<<s<<endl;
        cout <<"The Rating is " <<rating<<endl;
        cout<<"The Biography is in "<<words<<" words"<<endl;
    }
    
};
int main(){
    Derived1 D1("Pandit" ,4.5,34);
    D1.Display();
    cout<<endl;
    Derived2 D2("Pandit ", 4.67, 789);
    D2.Display();
    cout<<endl;
    Base *B[2];
    B[0]=&D1;
    B[1]=&D2;
    B[0]->Display();
    cout<<endl;
    B[1]->Display();

   
    return 0;
}