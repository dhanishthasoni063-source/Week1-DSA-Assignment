#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid number of students";
        return 0;
    }
    vector<int> marks(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks[i];
        sum += marks[i];
    }
    sort(marks.begin(), marks.end(), greater<int>());
    cout << "\nTop marks: ";
    for (int i = 0; i < min(n, 3); i++) {
        cout << marks[i] << " ";
    }
    double average = (double)sum / n;
    cout << "\nAverage marks: " << average;
    return 0;
}
