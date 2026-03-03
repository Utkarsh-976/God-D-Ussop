#include <iostream>
using namespace std;

int main()
{
    int a = 50;
    float b = 50.69;

    cout << "The value of a is: " << float(a) << endl;
    cout << "The value of a is: " << (float)a << endl; // both have same meaning

    cout << "The value of b is: " << int(b) << endl; // both have same meaning
    cout << "The value of b is: " << (int)b << endl; // both have same meaning
    cout << a + b << endl;
    cout << a + int(b) << endl;
    cout << a + (int)b << endl;

    return 0;
}