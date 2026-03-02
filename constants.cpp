#include <iostream>
using namespace std;

int main()
{
    // int a = 40;
    // cout<<"The value of a is: "<<a<<endl;
    // a=50;                           //This is the problem thats why const introduced
    // cout<<"The value of a is: "<<a<<endl;

    const int a = 40;
    cout << "The value of a is: " << a << endl;
    // a=50;                           //This is the problem thats why const introduced
    cout << "The value of a is: " << a << endl;

    return 0;
}