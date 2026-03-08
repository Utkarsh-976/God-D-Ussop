#include<iostream>
using namespace std;

int main(){
    enum meal{brekfast,lunch,dinner};
     meal m1 = lunch;

   cout<<brekfast<<endl;
   cout<<lunch<<endl;
   cout<<dinner<<endl;
   cout<<m1<<endl;
   
   cout<<(m1==2);
    

    return 0;
}