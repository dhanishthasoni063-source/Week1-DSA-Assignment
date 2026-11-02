#include <iostream>
using namespace std;
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key, found = -1;
    cout << "Enter element to search: ";
    cin >> key;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }
    if (found != -1)
        cout << "Element found at index " << found;
    else
        cout << "Element not found";
    return 0;
}
