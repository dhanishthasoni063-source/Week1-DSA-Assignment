#include <iostream>
using namespace std;
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int key, low = 0, high = 4, mid;
    int found = -1;

    cout << "Enter element to search: ";
    cin >> key;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            found = mid;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (found != -1)
        cout << "Element found at index " << found;
    else
        cout << "Element not found";
    return 0;
}
