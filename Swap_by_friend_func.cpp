#include <iostream>
using namespace std;

class Y;

class X
{
    int val1;
    friend void swapVal(X &, Y &);

public:
    void setval(int hell)
    {
        val1 = hell;
    }

    void display()
    {
        cout << val1;
    }
};

class Y
{
    int val2;
    friend void swapVal(X &, Y &);

public:
    void setval(int hell)
    {
        val2 = hell;
    }

    void display()
    {
        cout << val2;
    }
};

void swapVal(X &o1, Y &o2)
{
    int swap = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = swap;
}

int main()
{
    X a1;
    Y b1;

    a1.setval(33);
    b1.setval(64);

    swapVal(a1, b1);
    cout << "The value of a1 after Exchanging is: ";
    a1.display();
    cout << "\nThe value of b1 after Exchanging is: ";
    b1.display();

    return 0;
}