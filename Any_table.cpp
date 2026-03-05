#include <iostream>
using namespace std;

int main()
{
    // int a, b = 1;
    // cout << "Type the number: ";
    // cin >> a;

    // do
    // {
    //     cout <<a<<"*"<<b <<"=" << a * b << endl;
    //     b++;

    // } while (b <= 10);

    // int a;
    // cout << "Type the num: ";
    // cin >> a;

    // for (int b = 1; b <= 10; b++)
    // {

    //     cout << a << " * " << b << " = " << a * b << endl;
    // }

    int a,b=1;
    
    cout<<"Enter the num: ";
    cin>>a;

    while(b<=10){
        cout<<a<<" * "<<b<<" = "<<a*b<<endl;
        b++;
    }

    return 0;
}