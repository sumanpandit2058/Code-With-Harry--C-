#include <bits/stdc++.h>
using namespace std;
class Base{
    public:
    int var_Base =1;
     virtual void Display(void){
        cout<<"The value of var_Base is "<<var_Base<<endl;
    }
};
class Derived : public Base{
    public:
    int var_Derived=2;
    void Display(void){
    cout<<"The value of var_Base is "<<var_Base<<endl;
    cout<<"The value of Var_Derived id "<<var_Derived<<endl;
    }
};
int main(){
    Base *BasePointer;
    Base B;
    Derived *DerivedPointer;
    Derived D;
    BasePointer=&D;
    BasePointer->Display();
 
    return 0;
}