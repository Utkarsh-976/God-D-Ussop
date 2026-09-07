#include <bits/stdc++.h>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks: " << endl;
    cin >> marks;

    if (marks < 25)
    {
        cout << "your grade is:" << "F";
    }
    else if (  marks<=44)
    {
        cout << "your grade is:" << "E";
    }
    else{
        cout << "your grade is:" << "A";
        
    }

    return 0;
}