#include <iostream>
using namespace std;

class Y;

class X
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};

class Y
{
    int num;
    friend void add(X, Y);

public:
    void setvalue(int value)
    {
        num = value;
    }
};

void add(X o1, Y o2)
{
    cout << "The summing data of X & Y object gives me: " << o1.data + o2.num << endl;
}

int main()
{
    X a1;
    Y a2;
    a1.setvalue(1);
    a2.setvalue(4);

    add(a1,a2);

    return 0;
}