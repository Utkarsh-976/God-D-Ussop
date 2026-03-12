#include<iostream>
using namespace std;

class student{
    int id;
    int pocketmon;

    public:
        void setid(){
            pocketmon = 300;
            cout<<"Enter the id: ";
            cin>>id;
        }
        void getid(){
            cout<<"The id of this student is: "<<id<<endl;
        }
};

int main(){
    // student utk,ron,sam;
    // sam.setid();  --> is we have have multiple size like 1000 so...
    // sam.getid();

    student ut[4];
     for(int i = 0; i<4; i++){
        ut[i].setid();
        ut[i].getid();

     }
    

    return 0;
}