// 2. Sum from 1 to n
#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0)
        return 0;

    return n + sum(n - 1);
}

int main() {
    cout << sum(5);
}
