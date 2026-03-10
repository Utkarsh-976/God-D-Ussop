#include<iostream>
using namespace std;

int sum(int a , int b){
    cout<<"This one"<<endl;
    return a + b;
}

int sum(int a , int b, int c){
    cout<<"nahh this one"<<endl;
    return a + b + c;
}

int main(){
    cout<<"This sum of 3 & 4 is "<<sum(3,4)<<endl;
    cout<<"This sum of 3 & 4 & 3 & is "<<sum(3,4,3)<<endl;

    return 0;
}