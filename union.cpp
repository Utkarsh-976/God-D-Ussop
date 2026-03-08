  #include<iostream>
  using namespace std;
  
    union money{
        int rupee;
        char car;
        float pound;

    };

  int main(){
    union money m1 ;
    m1.rupee = 31;
    m1.car = 'c';

    cout<<m1.car<<endl;
 
    return 0;
  }