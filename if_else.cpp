#include <iostream>
using namespace std;
//if else or if else ladder
int main()
{
    int age;
    cout << "Tell me your age" << endl;
    cin >> age;

    if ((age < 18) && (age > 0))
    {
        cout << "You cannot drink Alcohol";
    }
    else if (age == 18)
    {
        cout << "you just attend party but not drink anything";
    }
    else if (age < 1)
    {
        cout << "Go back!";
    }
    else
    {
        cout << "You can drink";
    }

    return 0;
}