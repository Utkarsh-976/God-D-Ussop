#include <iostream>
using namespace std;

// Nesting of member functions
class number
{
private:
    int n;
    void check_even();

public:
    void input();
    void square();
    void display();
};

void number ::input()
{
    cout << "Enter a number: " << endl;
    cin >> n;
}

void number ::check_even()
{
    if (n % 2 != 0)
    {
        cout << "Number is not even!" << endl;
        exit(0);
    }
}

void number ::square()
{
    check_even(); // Nesting
    n = n * n;
}

void number ::display()
{
    cout << "Result: " << n << endl;
}

int main()
{
    number obj;
    obj.input();
    obj.square();
    obj.display();

    return 0;
}
