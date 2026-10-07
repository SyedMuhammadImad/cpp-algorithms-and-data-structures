#include <iostream>
using namespace std;

void displayEvenOdd(int arr[], int size){
    cout << "Even numbers: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << "Odd numbers: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
int main() {
    int arr[] = {3, 12, 7, 14, 9, 10, 23, 34};
    int size = sizeof(arr) / sizeof(arr[0]);
    displayEvenOdd(arr, size);

    return 0;
}
