#include <iostream>
using namespace std;
int main() {
    int arr[5] = {5, 2, 4, 1, 3};
    int swaps = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nTotal swaps: " << swaps;
    return 0;
}
