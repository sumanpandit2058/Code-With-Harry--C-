#include <bits/stdc++.h>
using namespace std;
class base1{
    int data1;
    public:
    base1(int data1base1){
        data1=data1base1;
        cout<<"Base 1 constructor called"<<endl;
    }
    void print1(void){
        cout<<"The value of data1 is "<<data1<<endl;
    }
};
class base2{
    int data2;
    public:
    base2(int data1base1){
        data2=data1base1;
        cout<<"Base2 constructor called"<<endl;
    }
    void print2(void){
        cout<<"The value of data2 is "<<data2<<endl;
    }
};
class Derived : public base1, public base2{
    int derived1, derived2;
    public:
    Derived(int a, int b, int c, int d): base1(a), base2(b){
        derived1=c;
        derived2=d;
        cout<<"Derived constructor called "<<endl;
    }
    void print3(void){
        cout <<"The value of derived1 and derived2 is "<<derived1<<" and "<<derived2<<endl;
    }
};
int main(){
    Derived Pandit(1,2,3,4);
    Pandit.print1();
    Pandit.print2();
    Pandit.print3();
    return 0;
}