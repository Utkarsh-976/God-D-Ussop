#include <iostream>
using namespace std;

int main()
{

    int marks[4] = {10, 20, 40, 60};

    cout << "The value of marks are" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    // with the help of loops**

    // for loop

    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is " << marks[i] << endl;
    }

    // with while loop

    int i = 0;
    while (i < 4)
    {
        cout << "The value of marks " << i << " is " << marks[i] << endl;
        i++;
    }

    // with do while loop

    // do{
    //     cout << "The value of marks " << i << " is " << marks[i] << endl;
    //     i++;
    // }while(i<4);

    return 0;
}