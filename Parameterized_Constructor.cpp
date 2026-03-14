#include<iostream>
using namespace std;

class complex{
    int a,b;

    public:
        complex(int,int); // Constructor Decleration
        
         void Printnumber(){
            cout<<"The complex no is "<<a<<" + "<<b<<"i"<<endl;
        }

};

complex :: complex(int x, int y){ //----> This is a Parameterized constructor as it accepts 2 parameters
    a = x;
    b = y;
}

int main(){
    //Implicit call
    complex a(2,4);
    a.Printnumber();

    //Explicit call
    complex b = complex(6,8);
    b.Printnumber();

    return 0;
}