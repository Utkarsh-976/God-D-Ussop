#include <iostream>
using namespace std;

bool isarmstrong(int n)
{
    int dup = n;
    int sum = 0;

    while (n > 0)
    {
        int ld = n % 10;
        sum = sum + (ld * ld * ld);
        n /= 10;
    }
    if (dup == sum)
        cout<< "true";
        
        else 
            cout<< "false";
        
    
}

int main()
{

    int num;
    cout << "type the value: ";
    cin >> num;
    isarmstrong(num);
}