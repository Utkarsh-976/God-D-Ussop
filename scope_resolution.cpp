#include<iostream>
using namespace std;

int c = 45;

int main(){
    int a,b,c;
    cout<<"The value of a is: ";
    cin>>a;
    cout<<"The value of b is: ";
    cin>>b;
    c=a+b;
    cout<<"The sum is: "<<c<<endl;
    cout<<"The global variable is: "<<::c;
    return 0;
}