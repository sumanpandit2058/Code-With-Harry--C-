#include <bits/stdc++.h>
using namespace std;
class Demo{
    int a, b;
    public:
    Demo(int, int );
    void print(void ){
        cout<<"Complex number is " <<a<<"+"<<b<<"i"<<endl;

    }
};
Demo :: Demo(int x, int y){
    a=x;
    b=y;
}
int main(){
    Demo D(2,4);
    D.print();
    Demo A= Demo(5,6);
    A.print();
    return 0;
}