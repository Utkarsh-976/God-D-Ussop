#include <iostream>
#include <string>
using namespace std;

// Nesting of members functions
class binary
{
private:
    string s; // By default private
    void chk_binary();

public:
    void read();
    void ones_complement();
    void display();
};

void binary ::read(void)
{
    cout << "Enter the Binary Num: " << endl;
    cin >> s;
}

void binary ::chk_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_complement(void)
{
    chk_binary(); // Nesting
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }

        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display()
{
    cout << "Displaying your Binary Number " << endl;
    for (int i = 0; i < s.length(); i++)
    {

        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_binary();
    b.display();
    b.ones_complement();
    b.display();

    return 0;
}