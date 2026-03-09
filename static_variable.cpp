#include<iostream>
using namespace std;

int product(int a, int b){
    static int c = 0; // this runs only one time
    c = c + 1;
    return a*b+c;
}

int main(){
    int a,b;
    cout<<"Type the value of a & b"<<endl;
    cin>>a>>b;
    cout<<"The product of a & b is "<<product(a,b)<<endl;
    cout<<"The product of a & b is "<<product(a,b)<<endl;
    cout<<"The product of a & b is "<<product(a,b)<<endl;
    cout<<"The product of a & b is "<<product(a,b)<<endl;
    cout<<"The product of a & b is "<<product(a,b)<<endl;
    cout<<"The product of a & b is "<<product(a,b)<<endl;
    cout<<"The product of a & b is "<<product(a,b)<<endl;
    cout<<"The product of a & b is "<<product(a,b)<<endl;
    cout<<"The product of a & b is "<<product(a,b)<<endl;
    cout<<"The product of a & b is "<<product(a,b)<<endl;
    cout<<"The product of a & b is "<<product(a,b)<<endl;
    cout<<"The product of a & b is "<<product(a,b)<<endl;
    cout<<"The product of a & b is "<<product(a,b)<<endl;
    cout<<"The product of a & b is "<<product(a,b)<<endl;
    cout<<"The product of a & b is "<<product(a,b)<<endl;
    cout<<"The product of a & b is "<<product(a,b)<<endl;


    return 0;
}