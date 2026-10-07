#include <iostream>
using namespace std;

void MaxMin(int arr[], int size) {
    if(!arr || size<=0){cout<<"Empty array"<<endl;return;}
    int max = arr[0], min = arr[0];
    for (int i =1; i< size;i++) {
        if (arr[i]>max) max=arr[i];
        if (arr[i]<min) min=arr[i];
    }
    cout << "Maximum value:" << max<< endl;
    cout << "Minimum value:" <<min ;
}
int main() {
    int arr[] = {3, 5, 7, 2, 9, 10, 1, 12};
    MaxMin(arr, 8);
    return 0;
}
