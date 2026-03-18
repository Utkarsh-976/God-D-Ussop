#include<iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout<<"Kaise ho?"<<endl;
        }
};

class Derived : public Base1, public Base2{
    int a;
        public:
            void greet(){
                Base1 :: greet(); // The way of Ambiguity Resolution Solution
            }
};

int main(){
    Base1 objbase1;
    Base2 objbase2;
    objbase1.greet();
    objbase2.greet();
    Derived d;
    d.greet();
    

    return 0;
}