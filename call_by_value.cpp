#include<iostream>
using namespace std;

void swap(int a, int b){
    int swap = a;
        a = b;
        b = swap;
}

//Swap using pointer reference
void swappoineter(int *a, int *b){
    int swap = *a;
        *a = *b;
        *b = swap;
}


int main(){
    int x = 4, y = 5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x,y);
    swappoineter(&x,&y);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;


    return 0;
}