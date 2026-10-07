#include <iostream>
using namespace std;

void displayUNumbers(int arr[], int size) {
    cout << "Unique numbers: ";
    for (int i = 0; i < size; i++) { int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
int main() {
    int arr[] = {3, 5, 7, 3, 9, 10, 5, 12, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    displayUNumbers(arr, size);
    return 0;
}
