#include<iostream>
using namespace std;

struct student{
    int id;
    char favchar;
    float pocketmoney;
    int rollno;
};

int main(){
    struct student ron;
    struct student rum;
    struct student sub;

    ron.favchar = 'c';
    ron.id = 1;
    ron.pocketmoney = 699.99;
    ron.rollno = 241217;

    cout<<ron.favchar<<endl;
    cout<<ron.id<<endl;
    cout<<ron.pocketmoney<<endl;
    cout<<ron.rollno<<endl;


    return 0;
}