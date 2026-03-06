#include <iostream>
using namespace std;

int main()
{

    int a = 4;
    // int *b = &a; or
    int *b;
    b = &a;

    cout << "The Address of a is: " << &a << endl;
    cout << "The Address of a is: " << b << endl;

    cout << "Value at address b is: " << *b << endl;

    // Pointer to Pointer

    int **c=&b;

    cout<<"\nThe address of b is: "<<&b<<endl;
    cout<<"The address of b is: "<<c<<endl;

    cout<<"The Value at address c is: "<<*c<<endl;
    cout<<"The value_at(value_at(c)) address is: "<<**c<<endl;

    return 0;
}