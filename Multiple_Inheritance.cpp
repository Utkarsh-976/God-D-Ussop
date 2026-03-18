#include <iostream>
using namespace std;

// Syntax for Multiple Inheritance

// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };

class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "The value of base1 is: " << base1int << endl;
        cout << "The value of base2 is: " << base2int << endl;
        cout << "The value of base3 is: " << base3int << endl;
        cout << "The sum is: " << base1int + base2int + base3int << endl;
    }
};

int main()
{
    derived utk;
    utk.set_base1int(75);
    utk.set_base2int(25);
    utk.set_base3int(25);
    utk.show();

    return 0;
}