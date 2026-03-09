#include<iostream>
using namespace std;

int strnel(const char *p ){ // constant arguments

}

float moneyrecived(int currentmoney, float factor = 1.04){
    return currentmoney*factor;
}

int main(){
    int money = 100000;
    cout<<"The amt is "<<money<<" you recive after interest: "<<moneyrecived(money)<<endl;
    cout<<"For VIP: The amt is "<<money<<" you recive after interest: "<<moneyrecived(money,1.1)<<endl;

    return 0;
}