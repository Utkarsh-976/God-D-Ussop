#include <iostream>
#include <string>
using namespace std;

// Nesting of member functions
class binary
{
private:
    string s;
    void check_binary();

public:
    void read();
    void reverse_binary();
    void display();
};

void binary ::read(void)
{
    cout << "Enter a Binary Number: " << endl;
    cin >> s;
}

void binary ::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid Binary Number!" << endl;
            exit(0);
        }
    }
}

void binary ::reverse_binary(void)
{
    check_binary(); // Nesting
    reverse(s.begin(), s.end());
}

void binary ::display()
{
    cout << "Your Binary Number is: " << s << endl;
}

int main()
{
    binary b;
    b.read();
    b.display();
    b.reverse_binary();
    b.display();

    return 0;
}
