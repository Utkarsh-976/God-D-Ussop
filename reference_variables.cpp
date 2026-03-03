#include <iostream>
using namespace std;
// ************************reference variable means we call one thing with different names
int main()
{
    int x = 500;
    int &y = x; //& is used

    cout << x << endl;
    cout << y << endl;

    return 0;
}