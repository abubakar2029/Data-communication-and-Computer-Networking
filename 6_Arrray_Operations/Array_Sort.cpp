#include<iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int arr[5]; // Corrected the array size to 5

    for (int i = 0; i < 5; i++) { // Corrected the loop condition
        cout << "enter number: \n";
        cin >> arr[i];
    }

    for (int i = 0; i < 4; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
            i=-1;
        }
    }

    for (int i = 0; i < 5; i++) { // Corrected the loop condition
        cout << arr[i] << " ";
    }

    return 0;
}
