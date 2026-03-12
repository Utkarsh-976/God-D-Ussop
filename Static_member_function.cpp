#include <iostream>
using namespace std;

class employee
{
    int id; // by default private
    static int count;

public:
    void setdata()
    {
        cout << "Enter the employee id: ";
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "The id of this employee is " << id << " and the employee number is " << count << endl;
    }

    static int getcount(){
        // cout<<id; --> throws an error
        cout<<"The value of count is: "<<count<<endl;
    }
};

// count is the static data member of class employee
int employee::count; // default value is 0

int main()
{
    employee utkarsh, sam, ron;

    utkarsh.setdata();
    utkarsh.getdata();
    employee ::getcount(); 
    
    sam.setdata();
    sam.getdata();
    employee ::getcount(); 
    
    ron.setdata();
    ron.getdata();
    employee ::getcount(); 

    return 0;
}