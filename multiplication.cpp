#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the arrays: ";
    cin >> n;

    int arr1[n], arr2[n], result[n];
    cout << "Enter elements of the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cout << "Enter elements of the second array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    for (int i = 0; i < n; i++) {
        result[i] = arr1[i] * arr2[i];
    }

    cout << "Result of array multiplication: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}

