#include<iostream>
using namespace std;

class complex{
    int a,b;

    public:
        complex(void); // Constructor Decleration
        
         void Printnumber(){
            cout<<"The complex no is "<<a<<" + "<<b<<"i"<<endl;
        }

};

complex :: complex(){ //----> This is a Default constructor as it accepts no parameters
    a = 0;
    b = 0;
}

int main(){
    complex a,b;
    a.Printnumber();
    b.Printnumber();

    return 0;
}