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

    return 0;
}