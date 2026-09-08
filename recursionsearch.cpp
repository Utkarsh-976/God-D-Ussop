// 4. Search a number in an array
#include <iostream>
using namespace std;

bool findNumber(int arr[], int size, int index, int target) {
    if (index == size)
        return false;

    if (arr[index] == target)
        return true;

    return findNumber(arr, size, index + 1, target);
}

int main() {
    int arr[] = {1, 4, 7, 9};
    int size = 4;

    cout << findNumber(arr, size, 0, 7);
}
