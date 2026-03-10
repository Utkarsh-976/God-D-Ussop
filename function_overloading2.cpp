#include<iostream>
using namespace std;

int volumecube(int a){
    return a*a*a;
}

int volumecuboid(int l, int b, int h){
    return l*b*h;
}

int volumecylinder(int r, int h){
    return 3.14*r*r*h;
}
int main(){
    cout<<"The volume is: "<<volumecube(3)<<endl;
    cout<<"The volume is: "<<volumecuboid(3,7,6)<<endl;
    cout<<"The volume is: "<<volumecylinder(3,6)<<endl;

    return 0;
}