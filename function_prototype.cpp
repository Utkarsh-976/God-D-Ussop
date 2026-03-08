#include<iostream>
using namespace std;


// This is func Prototyping

int sum(int a,int b);
// int sum(int ,int);//also valid
// int sum(int a,b); --> not valid

void g();
// void g(void);--> also valid not comapulsory

int main(){
    
    int num1,num2;
    cout<<"enter first num1"<<endl;
    cin>>num1;
    cout<<"enter second num2"<<endl;
    cin>>num2;
    cout<<"The sum is: "<<sum(num1,num2);
    g();

    return 0;
}

int sum(int a ,int b){
    int c = a+b;
    return c;
}

void g(){
    cout<<"\nHello,Guys";
}