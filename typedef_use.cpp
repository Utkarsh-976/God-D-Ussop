#include<iostream>
using namespace std;

    typedef struct student{
        int rollno;
        float Class;
    }stu;

int main(){

    stu harry;
    harry.rollno = 345;
    harry.Class = 3.1;

    cout<<harry.rollno<<endl;
    cout<<harry.Class<<endl;
    

    return 0;
}