#include<iostream>
using namespace std;

class animal{
    private:
        int l,t;
    public:
        char d , c, b;
        void wild(int l1, int t1);
        void pets(){
            cout<<"pet animals: "<<d<<endl;
            cout<<"pet animals: "<<c<<endl;
            cout<<"pet animals: "<<b<<endl;
        }
};

void animal :: wild(int l1, int t1 ){
    l = l1;
    t = t1;

}

int main(){
    animal gtl;
    gtl.d = 'a';
    gtl.c = 'b';
    gtl.b = 'd';
    gtl.pets();

    return 0;
}