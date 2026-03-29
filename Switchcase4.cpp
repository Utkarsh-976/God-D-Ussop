#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "1. Hello\n2. Bye\n3. Thank You\nEnter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Hello!";
            break;
        case 2:
            cout << "Goodbye!";
            break;
        case 3:
            cout << "Thank you!";
            break;
        default:
            cout << "Invalid choice!";
    }

    return 0;
}
