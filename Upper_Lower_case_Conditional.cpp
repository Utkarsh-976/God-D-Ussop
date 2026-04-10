#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Write the value here: ";
    cin>>ch;

    if(ch>96 && ch<=122){
        cout<<"it lower case: "<<endl;
    }
    else if(ch>=65 && ch<=90){
        cout<<"it upper case: "<<endl;
    }
    else if(ch>=48 && ch<=57){
        cout<<"numeric";
    }
    else{
        cout<<"symbol";
    }



    return 0;
}