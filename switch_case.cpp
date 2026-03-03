#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Tell me your age: ";
    cin >> age;

    switch (age)
    {
    case 18:
        cout << "You are 18!" << endl;
        break;

    case 20:
        cout << "You are 20!" << endl;
        break;

    case 15:
        cout << "You are 15!" << endl;
        break;

    default:
        cout << "No special cases!"<<endl;
        break;
    }
    cout << "This is it in switch case!";

    return 0;
}