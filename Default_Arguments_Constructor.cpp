#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int a, int b = 3, int c = 4) // Default Arguments
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void print();
};

void simple::print()
{
    cout << "The value of data1, data2, data3 is: " << data1 << ", " << data2 << " and " << data3;
}

int main()
{
    // simple a(2,6,8);
    simple a(2);
    a.print();

    return 0;
}
