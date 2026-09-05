#include <iostream>
using namespace std;

 bool isPalindrome(int n) {
        int dup = n;
        int revnum = 0;

        while(n>0){
            int ld = n%10;
            revnum = (revnum*10)+ld;
            n/=10;
        }
        if(dup==revnum){
            cout<< "true";
        }
        else {
            cout<< "false";
        }
    }

int main(){

    int num;
    cout <<"type the value: ";
    cin>>num;
    isPalindrome(num);

}