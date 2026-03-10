#include<iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    void setData(string n, int a)
    {
        name = n;
        age = a;
    }

    void showData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1;

    s1.setData("Rahul", 20);
    s1.showData();

    return 0;
}
