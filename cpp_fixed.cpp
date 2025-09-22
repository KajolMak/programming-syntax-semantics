#include <iostream>
using namespace std;

int calculateSum(int arr[], int size) {
    int total = 0;  // fixed: 0 instead of o
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;   // fixed: return 0 below
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int result = calculateSum(numbers, size);
    cout << "Sum in C++: " << result << endl;
    return 0;  // fixed: 0 instead of o
}
