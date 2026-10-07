#include <iostream>
using namespace std;

void search(int arr[], int size, int target) {
    int i = 0;
    while (i < size) {
        if (arr[i] == target) {
            cout << "The number " << target << " is in the array." << endl;
            return;
             }
        i++;
    }
    cout << "The number " << target << " is not in the array." << endl;
}

int main() {
    constexpr int size = 5;
    int arr[size] = {1, 55, 4, 6, 7};
    int target = 8;
    search(arr, size, target);
    return 0;
}
