#include <iostream>
using namespace std;

int main()
{

    // Array Example

    int marks[4] = {10, 20, 40, 60}; // 1 way

    cout << "The value of marks are" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    int mathmarks[4]; // 2nd way
    mathmarks[0] = 3760;
    mathmarks[1] = 4376;
    mathmarks[2] = 3776;
    mathmarks[3] = 3769;

    mathmarks[2] = 4555; // You can change value of an array
    cout << "These are math marks" << endl;
    cout << mathmarks[0] << endl;
    cout << mathmarks[1] << endl;
    cout << mathmarks[2] << endl;
    cout << mathmarks[3] << endl;
    return 0;
}