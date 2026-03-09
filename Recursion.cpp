#include<iostream>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1); //function calling it self
}

int main(){
    int a;
    cout<<"Enter the num ";
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<factorial(a);

    return 0;
}