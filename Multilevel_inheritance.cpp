#include <iostream>
using namespace std;

class rollNumber
{
protected:
    int rollnumber;

public:
    int set_rollNumber(int);
    void get_rollNumber();
};

int rollNumber ::set_rollNumber(int r)
{
    rollnumber = r;
}

void rollNumber ::get_rollNumber()
{
    cout << "The Utkarsh Tripathi roll number is: " << rollnumber << endl;
}

class Exam : public rollNumber
{
protected:
    int math, physics;

public:
    float set_marks(float, float);
    void get_marks();
};

float Exam ::set_marks(float m1, float m2)
{
    math = m1;
    physics = m2;
}

void Exam ::get_marks()
{
    cout << "The math marks are: " << math << endl;
    cout << "The physics marks are: " << physics << endl;
}

class percentage : public Exam
{
private:
    float Percentage;

public:
    void display()
    {
        get_rollNumber();
        get_marks();
        cout << "The percentage are: " << (math + physics) / 2 << "%" << endl;
    }
};

int main()
{
    percentage Utk;
    Utk.set_rollNumber(217);
    Utk.set_marks(99, 100);
    Utk.display();

    return 0;
}