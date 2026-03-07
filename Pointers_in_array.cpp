#include <iostream>
using namespace std;

int main()
{

    int marks[4] = {10, 20, 40, 60};

    cout << "The value of marks are" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    int *p = marks;
    cout << "The value at *p is " << *p << endl;
    cout << "The value at *(p+1) is " << *(p + 1) << endl;
    cout << "The value at *(p+2) is " << *(p + 2) << endl;
    cout << "The value at *(p+3) is " << *(p + 3) << endl
         << "\n";

    cout << "with increment " << endl;
    cout << *(p) << endl;
    cout << *(p++) << endl;
    cout << *(++p) << endl;

    return 0;
}